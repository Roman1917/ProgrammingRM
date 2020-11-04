#include"Lab2B.h"
#include <iostream>
#include <string>
using namespace std;
int main()
{
	Firms oracle("1", 24880000, 31.1);
	Firms ibm("3", 23920000, 29.9);
	Firms microsoft("1", 24880000, 31.1);

	oracle == microsoft ? cout << "1" << endl : cout << "0" << endl;
	oracle == ibm ? cout << "1" << endl : cout << "0" << endl;
	oracle = oracle + microsoft;
	cout << oracle.get_info() << endl;
	oracle = oracle + ibm;
	cout << oracle.get_info() << endl;

	cout << oracle[oracle.get_info().c_str()] << endl;

	oracle();
	cout << oracle.get_info() << endl;
	return 0;
}
