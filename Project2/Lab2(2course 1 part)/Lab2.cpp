
#include"Lab2.h"
void shapka()
{
	cout << "_______________________________________________________________\n";
	cout << "|                    Фирмы-производители СКБД                 |\n";
	cout << "|-------------------------------------------------------------|\n";
	cout << "|   Фирма  | Продуктов |     Обьем продаж    | Часть рынка(%) |\n";
	cout << "|-------------------------------------------------------------|\n";
}

void linebuild() {
	cout << "\n|-------------------------------------------------------------|\n";
}

ostream& operator<<(ostream& stream, firms& o1) {
	shapka();
	stream << "|" << setw(10) << o1.firm << "  |  ";
	stream << setw(5) << o1.kolvprod << "|";
	stream << setw(18) << o1.sales << "  |";
	stream << setw(17) << o1.square << "   |" << endl;
	linebuild();
	return stream;
}


istream& operator>>(istream& stream, firms& o1) {
	cout << "Фирма, Количество продуктов, Годовой обьем продаж, Часть рынка($): \n";
	stream >> o1.firm;
	stream >> o1.kolvprod;
	stream >> o1.sales;
	stream >> o1.square;
	return stream;
}
//
firms firms::operator + (firms& o1) {
	firms tr;
	delete[] tr.firm;
	delete[] tr.kolvprod;
	tr.firm = new char[strlen(firm) + strlen(o1.firm) + 2];
	strcpy(tr.firm, firm);
	strcat(tr.firm, o1.firm);
	tr.kolvprod = new char[strlen(kolvprod) + strlen(o1.kolvprod) + 2];
	strcpy(tr.kolvprod, kolvprod);
	strcat(tr.kolvprod, o1.kolvprod);
	tr.sales = sales + o1.sales;
	tr.square = square + o1.square;
	return tr;
}

int firms::operator == (firms& o1) {
	if (sales != o1.sales) { cout << "Данные экземпляры класса не равны."; _getch(); }
	else if (ceil(square) != ceil(o1.square)) { cout << "Данные экземпляры класса не равны."; _getch(); }
	else if (strcmp(firm, o1.firm) != 0) { cout << "Данные экземпляры класса не равны."; _getch(); }
	else if (strcmp(kolvprod, o1.kolvprod) != 0) { cout << "Данные экземпляры класса не равны."; _getch(); }
	else cout << "Экземпляры класса равны."; _getch();
	return 0;
}

firms& firms::operator = (firms& o1) {
	delete[] firm;
	delete[] kolvprod;
	firm = new char[strlen(o1.firm) + 2];
	if (!firm) {
		cout << "Ошибка! Память не выделена.";
		exit(1);
	}
	strcpy(firm, o1.firm);
	kolvprod = new char[strlen(o1.kolvprod) + 2];
	if (!kolvprod) {
		cout << "Ошибка! Память не выделена.";
		exit(1);
	}
	strcpy(kolvprod, o1.kolvprod);
	sales = o1.sales;
	square = o1.square;
	return *this;
}

firms::firms(char* a, char* b, unsigned int c, float d) {
	firm = new char[strlen(a) + 1];
	strcpy(firm, a);
	kolvprod = new char[strlen(b) + 1];
	strcpy(kolvprod, b);
	sales = c;
	square = d;
}

void firms::setall(char* a, char* b, unsigned int c, float d) {
	strcpy(firm, a);
	strcpy(kolvprod, b);
	sales = c;
	square = d;
}

void firms::showall(void) {
	cout << firm << " ";
	cout << kolvprod << " ";
	cout << sales << " ";
	cout << square << " ";
}

void firms::getall(char* a, char* b, unsigned int& c, float& d)
{
	delete[] a;
	delete[] b;
	a = new char[strlen(firm) + 1];
	b = new char[strlen(kolvprod) + 1];
	strcpy(a, firm);
	strcpy(b, kolvprod);
	c = sales;
	d = square;
	cout << a << " ";
	cout << b << " ";
	cout << c << " ";
	cout << d << " ";
	cout << "\n";
}
