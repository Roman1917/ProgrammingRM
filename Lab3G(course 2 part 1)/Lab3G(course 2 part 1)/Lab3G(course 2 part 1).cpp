#include"Lab3G.h"
int main()
{
	setlocale(LC_ALL, "Ukrainian");

	Figure1 C;
	C.setX(5);
	C.setY(6);
	C.show();

	Figure2 B;
	B.setX(5);
	B.setY(10);
	B.show();


	Figure3 A;
	Figure3 *px = &A;
	A.setX(3);
	A.area(5);
	A.show();



}
