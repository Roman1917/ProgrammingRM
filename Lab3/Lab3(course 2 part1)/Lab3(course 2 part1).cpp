#include "Lab3.h"


int main()
{
	setlocale(LC_ALL, "Ukrainian");
	D2 temp(100, 200, 300, 400);
	D3 temp1( 2, 3, 4, 5);
	cout << "D2 temp(100,111,200,300);\n";
	cout << "D3 temp1(2,3,4,5);\n";
	cout << "\n—леду€ иерархии класса D2: \n";
	temp.show();
	cout << "\n—леду€ иерархии класса D3\n";
	temp1.show();
	return 0;

}
