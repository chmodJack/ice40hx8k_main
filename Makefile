
SYN_FLAGS+=synth_ice40
SYN_FLAGS+=-top top

PNR_FLAGS+=--hx8k
PNR_FLAGS+=--package ct256
PNR_FLAGS+=--pcf pinmap.pcf

SOURCE_FILES+=$(shell find . -name '*.v')

alll:sim

all:
	yosys -q -p "$(SYN_FLAGS) -json top.json" $(SOURCE_FILES)
	nextpnr-ice40 -q $(PNR_FLAGS) --asc top.asc --json top.json
	icepack top.asc top.bin
	mkdir -p ./build
	mv top.json ./build
	mv top.asc  ./build
	mv top.bin  ./build
burn:
	iceprog ./build/top.bin
test:
	icetime -tmd hx8k ./build/top.asc
	icebox_explain ./build/top.asc
	icebox_vlog -p pinmap.pcf ./build/top.asc
sim:
	mkdir -p ./simulation
	verilator -Wno-fatal --public-flat-rw --sc --Mdir ./simulation --top-module top ./top.v
	make -C ./simulation -f Vtop.mk verilated.o Vtop__ALL.a
	#gtw ./simulation/Vtop.h ./simulation/top.cpp
	gcc -c -o ./simulation/top.o -std=c++14 -I$(SYSTEMC_HOME)/include -I$(VERILATOR_ROOT)/include -I$(VERILATOR_ROOT)/include/vltstd ./simulation/top.cpp
	g++ -o ./simulation/top -L$(SYSTEMC_HOME)/lib-linux64 ./simulation/verilated.o ./simulation/Vtop__ALL.o ./simulation/top.o -lsystemc
	./simulation/top
clean:
	rm -rf build simulation

