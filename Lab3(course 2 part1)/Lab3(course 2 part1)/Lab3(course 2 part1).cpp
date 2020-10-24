#include "Lab3.h"


int main()
{
	setlocale(LC_ALL, "Ukrainian");
	system("cls");
	D3 temp(100, 200, 300);
	D4 temp1(1, 2, 3, 4, 5);
	cout << "D3 temp(100,200,300);\n";
	cout << "D4 temp1(1,2,3,4,5);\n";
	cout << "\n—леду€ иерархии класса D3: \n";
	temp.show_D3();
	cout << "\n—леду€ иерархии класса D4\n";
	temp1.show_D4();
	return 0;

}
