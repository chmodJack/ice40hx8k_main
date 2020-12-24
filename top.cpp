#include<systemc>
using namespace std;
using namespace sc_core;
using namespace sc_dt;

#include"Vtop.h"

#define DEAL_MACROS(X) \
	X(clk)\
	X(rst)\
	X(a)\
	X(b)\
	X(c)\
	X(d)\
	X(e)\
	X(f)\
	X(g)\
	X(h)

int sc_main(int argc,char* argv[])
{
#define DEFINE_SIGNALS(X) sc_signal<bool> X;
	DEAL_MACROS(DEFINE_SIGNALS)

	Vtop vt("vt");
#define BIND_SIGNALS(X) vt.X(X);
	DEAL_MACROS(BIND_SIGNALS)

	int i = 5000;
	while(i--)
	{
		sc_start(1,SC_MS);
	}

    return 0;
}
