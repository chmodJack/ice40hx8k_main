#include<systemc>
using namespace std;
using namespace sc_core;
using namespace sc_dt;

#include"Vtop.h"

int sc_main(int argc,char* argv[])
{
	sc_signal<bool> clk;
	sc_signal<bool> rst;
	sc_signal<bool> a;
	sc_signal<bool> b;
	sc_signal<bool> c;
	sc_signal<bool> d;
	sc_signal<bool> e;
	sc_signal<bool> f;
	sc_signal<bool> g;
	sc_signal<bool> h;

	Vtop vtop("vtop");

    return 0;
}
