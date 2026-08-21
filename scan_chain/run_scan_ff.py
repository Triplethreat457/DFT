from pathlib import Path
from cocotb_tools.runner import get_runner

def run():
    sim = "verilator"
    proj_path = Path(__file__).resolve().parent #Essentially get the directory above  run.py which would be ex: users/triplethreat457/DFT/scan_chain
    verilog_sources = [
        proj_path/ "rtl"/ "scan_ff.sv", # creating a list of the location of the directories of the verilog files
    ]
    runner = get_runner(sim) #runner object created and uses Verilator as its sim could be  Questa, Verilator, modelsim, etc.


    runner.build( # Build the runner, tell the verilog files, top_level, and parameter values
        sources=verilog_sources,
        hdl_toplevel="scan_ff",
        build_args = ["--trace","-CFLAGS", "-std=c++14"],
        parameters={
            "width" : 8,  # set paramter width to be 8 
        },
        waves=True,   # tells the build to expect a trace for waveform dumping
    )
    
    runner.test(
        hdl_toplevel="scan_ff",
        test_module="test_scan_ff",
        test_dir=proj_path / "tb",
        waves=True # <--- Tells Cocotb to dump the trace
    )
   

    

if __name__ == "__main__":
    run()





