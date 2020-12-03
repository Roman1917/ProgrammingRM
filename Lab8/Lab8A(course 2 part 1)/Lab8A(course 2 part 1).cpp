
#include "Lab8A.h"

int main()
{

	Number<int,double>OLP;
	OLP.show();

	Number<int, double>OLP1(11, 5.1);

	Number<int, double>OLP2 = OLP + OLP1;
	OLP2.show();
}

