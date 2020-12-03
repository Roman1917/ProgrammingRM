#include "Vuz.h"

int main() {
	setlocale(0, "ru");
	srand(time(0));
	VUZ KhPI;
	KhPI.printall();
	KhPI.printPrepodsUnder50();
	KhPI.printDolzhniki();
	system("pause");
}