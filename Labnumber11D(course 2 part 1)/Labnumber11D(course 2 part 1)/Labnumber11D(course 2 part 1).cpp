#include <iostream>
#include <ctime>
#include"Lab11D.h"
using namespace std;

int main()
{
	srand(time(NULL));
	Sets set_1;
	Sets set_2(4, 100, 5);
	Sets set_3(set_1.GetSet(), 5);
	cout << set_1.MaxElem() << endl;
	cout << set_2.MaxElem() << endl;
	cout << set_3.MaxElem() << endl;
	set_1.Print();
	set_2.Print();
	set_3.Print();
	return 0;
}
