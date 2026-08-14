VERILATOR = verilator

RTL = rtl/scan_ff.sv
TB = tb/scan_ff_tb.cpp
RTLT = rtl/scan_ff.sv rtl/scan_chain.sv
TB2 = tb/scan_chain_tb.cpp

TARGET = scan_ff_sim


scan_ff:
	$(VERILATOR) --cc --exe --build --Wall \
	$(RTL) $(TB) \
	--top-module scan_ff \
	-CFLAGS "-std=c++14" \
	-o $(TARGET)

scan_chain:
	$(VERILATOR) --cc --exe --build --Wall \
	$(RTLT) $(TB2) \
	--top-module scan_chain \
	-Gwidth=8 \
	-CFLAGS "-std=c++14" \
	-o $(TARGET)


run:
	./obj_dir/scan_ff_sim


