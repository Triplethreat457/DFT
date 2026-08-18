from pathlib import Path
from cocotb_tools.runner import get_runner

def run():
    sim = "verilator"
    proj_path = Path(__file__).resolve().parent #Essentially get the directory above  run.py which would be ex: users/triplethreat457/DFT/scan_chain
    verilog_sources = [
        proj_path/ "rtl"/ "scan_ff.sv", # creating a list of the location of the directories of the verilog files
        proj_path/"rtl"/"scan_chain.sv"
    ]
    runner = get_runner(sim) #runner object created and uses Verilator as its sim could be  Questa, Verilator, modelsim, etc.


    runner.build( # Build the runner, tell the verilog files, top_level, and parameter values
        sources=verilog_sources,
        hdl_toplevel="scan_chain",
        build_args = ["--trace","-CFLAGS", "-std=c++14"],
        parameters={
            "width" : 8,  # set paramter width to be 8 
        },   
    )

    runner.test(
        hdl_toplevel="scan_chain",
        test_module="test_scan_chain",
        test_dir=proj_path / "tb",
    )

if __name__ == "__main__":
    run()

    



