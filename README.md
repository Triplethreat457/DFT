# Scan Chain Design for Testability (DFT)

This repository contains the RTL implementation and verification environment for a parameterized **Scan Chain**, a fundamental Design for Testability (DFT) technique used in ASIC testing. 

The project includes both a native C++ Verilator testbench and a Python-based Cocotb testbench, fully configured to run natively on Apple Silicon / macOS.

---

## 1. Environment Setup (MacBook & .venv)

Modern versions of macOS use a strict Python environment protocol (PEP 668) that prevents you from globally installing Python packages via `pip`. To run Cocotb on a MacBook, you must set up Verilator via Homebrew and create a Python Virtual Environment (`.venv`).

### Install Prerequisites
First, install Verilator and Python using Homebrew:
```bash
brew install verilator python3

# Create the virtual environment folder named '.venv'
python3 -m venv .venv

# Activate the environment (You must run this every time you open a new terminal)
source .venv/bin/activate

pip install cocotb cocotb-test pytest pyuvm


# 2. Project File Structure & What Each File Does

To keep this DFT (Design for Testability) project organized, it is split into several directories. Here is a breakdown of the standard workspace:

*   **`rtl/`**: Contains your SystemVerilog hardware source code.
    *   `scan_ff.sv`: The core Scan Flip-Flop module.
    *   `scan_chain.sv`: The top-level module that chains multiple `scan_ff` modules together.
*   **`tb/`**: Contains your testbench files.
    *   `test_scan_chain.py`: The Python-based Cocotb testbench.
    *   `tb_scan_chain.cpp`: The native C++ Verilator testbench.
*   **`run.py`**: The Python runner script that configures Cocotb, calls Verilator to build the executable, and automatically renames the generated `dump.vcd` file.
*   **`Makefile`**: A command-line shortcut file used to compile and run tests without typing long terminal commands.
*   **`sim_build/` / `obj_dir/`**: Temporary directories created by Verilator and Cocotb during compilation. (These are safe to delete using `make clean`).

### The Role of `.venv` (Python Virtual Environment)
When developing on macOS (Apple Silicon), the system blocks you from globally installing Python packages like Cocotb using `pip` to protect macOS internal tools. 

To solve this, we use a `.venv` (Virtual Environment). The `.venv` is simply an isolated folder that acts like a private Python installation just for this project. When you run `source .venv/bin/activate`, your terminal redirects all Python commands to use this private folder. This allows you to safely install `cocotb`, `pyuvm`, and `pytest` without breaking your Mac, ensuring your Cocotb environment works flawlessly on Apple Silicon.

---

# 3. Hardware Implementation: Scan FF and Scan Chain

### The Scan Flip-Flop (`scan_ff`)
A standard D-Flip Flop is heavily modified for testing by adding a 2-to-1 multiplexer at its input. This is the foundation of DFT architecture.
*   **Capture Mode (`scan_enable = 0`)**: The mux selects the `D` input. The flip-flop behaves like normal, capturing functional logic data from the circuit.
*   **Shift Mode (`scan_enable = 1`)**: The mux selects the `SI` (Scan In) input. The flip-flop ignores normal data and instead captures test data being piped in from a tester.

### The Scan Chain (`scan_chain`)
The top-level `scan_chain` module links an array of `scan_ff` modules together in a line—connecting the `Q` output of one flip-flop directly into the `SI` (Scan In) of the next. 

When `scan_enable` is flipped to `1`, the entire row of flip-flops behaves like one massive **Shift Register**. This allows an Automated Test Equipment (ATE) machine to serially push a specific test pattern (a "test vector") deep into the chip's internal registers bit-by-bit. Once loaded, `scan_enable` drops to `0` for one clock cycle to capture the combinational logic results, and then flips back to `1` to shift those results out for verification.

---

# 4. Running Testbenches: C++ vs. Python

This project supports two different simulation flows using Verilator. 

### Native C++ Testbench Flow
Verilator translates your SystemVerilog into C++ classes. You can write a standard C++ wrapper (`tb_scan_chain.cpp`) to instantiate the module, toggle the clock, and drive the pins manually. 
*   **How it works**: You compile the SV and C++ wrapper together into an executable binary (e.g., `make scan_chain`). You then run that binary (`make run_scan_chain`).
*   **Pros**: Incredible simulation speed.
*   **Cons**: C++ is verbose and lacks modern hardware verification features.

### Python Cocotb Flow
Cocotb replaces the C++ wrapper with a purely Python-based testbench. It still uses Verilator to simulate the hardware, but it uses standard VPI hooks to let your Python script (`test_scan_chain.py`) pause time, drive signals, and check assertions.
*   **How it works**: You run `python3 run.py`. Python tells Verilator to compile the design, boots up the simulation, and executes your async Python testbench natively.
*   **Pros**: You have access to the entire Python ecosystem, a UVM framework via `pyuvm`, and asynchronous coroutines that make driving signals extremely easy.

---

# 5. Viewing Waveforms in VS Code (VaporView)

Instead of relying on clunky external apps like GTKWave, you can view your generated `.vcd` files directly in Visual Studio Code using an extension called **VaporView**.

### Setting Up VaporView
1. Open the VS Code Extensions tab and install **VaporView**.
2. Run your Cocotb test (`python3 run.py`), which will output a `scan_chain.vcd` file in your project root.
3. Click on the `.vcd` file in VS Code. VaporView will open a new editor tab.

### Organizing the UI (Columns & Signals)
When debugging a scan chain, viewing signals in the correct order is critical. 
1. **Hierarchy Pane**: Expand your `scan_chain` top module on the left pane.
2. **Add Signals**: Select the core control signals and add them to your viewer. Hold `Shift` and drag them over, or right-click to add.
3. **Reorder into Groups (Columns)**: Use the up/down arrows to rearrange your signals top-to-bottom for readability:
   *   *Top Group (Clocks):* `clk`, `reset`
   *   *Middle Group (Control & Data):* `scan_enable`, `scan_in`
   *   *Bottom Group (Outputs):* `q` (The array of flip-flop outputs)
4. **Value Formatting**: You can right-click any multi-bit bus in the viewer to change its format from Binary to Hexadecimal, which makes tracking data shifts much easier.

---

# 6. Scan Chain Timing Graphs & Visuals

Here is an online-friendly representation of how data moves through the scan chain during a typical test sequence. 

### Diagram: Shifting `1-0-1` into a 3-bit Scan Chain

```text
Cycle   scan_en  scan_in   FF_0    FF_1    FF_2    Notes
-------------------------------------------------------------------------
  0        1        1        X       X       X     Start Shift Mode
  1        1        0        1       X       X     '1' loaded into FF_0
  2        1        1        0       1       X     '1' moves to FF_1, '0' enters FF_0
  3        1        0        1       0       1     Test vector [1, 0, 1] is loaded
-------------------------------------------------------------------------
  4        0        X        D0      D1      D2    Capture Mode (Reads standard logic)
-------------------------------------------------------------------------
  5        1        X        X       D0      D1    Shift out captured results
  6        1        X        X       X       D0    ...
