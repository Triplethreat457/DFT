VERILATOR = verilator

RTL = rtl/scan_ff.sv
TB = tb/scan_ff_tb.cpp

TARGET = scan_ff_sim

all:
	$(VERILATOR) --cc --exe --build --Wall \
	$(RTL) $(TB) \
	--top-module scan_ff \
	-CFLAGS "-std=c++14" \
	-o $(TARGET)


