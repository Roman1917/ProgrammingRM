
#include "Lab2.h"
int isvalid(int a, int b) {
	if (((a > N - 1) || (a < 0)) || ((b > N - 1) || (b < 0)))
	{
		cout << "ќшибка! Ёкземпл€ра с таким индексом не существует.\n";
		_getch();
		return -1;
	}
	else if (a == b)
	{
		cout << "ќшибка! Ёкземпл€р не может быть записан сам в себ€.\n";
		_getch();
		return -2;
	}
	return 0;
}

int main(void) {
	setlocale(LC_ALL, "Ukrainian");

	unsigned int s;
	float h;
	short i, k;
	unsigned int s1;
	short q, q1;


	char* n1 = new char[20]; strcpy(n1, "Oracle");
	char* t1 = new char[20]; strcpy(t1, "    1");
	char* n2 = new char[20]; strcpy(n2, "IBM");
	char* t2 = new char[20]; strcpy(t2, "       3");
	char* n3 = new char[20]; strcpy(n3, "Microsoft ");
	char* t3 = new char[20]; strcpy(t3, "2");
	firms obj[N]
	{
			firms(n1, t1, 2488800,   31.1),
			firms(n2, t2, 23900000,  29.9),
			firms(n3, t3, 104800000, 13.1)
	};

	system("cls");
	cout.precision(2);
	cout << "‘ирма,  оличество продуктов, √одовой обьем продаж, „асть рынка($): \n";
	for (i = 0; i < N; i++) {
		obj[i].showall();
		cout << "\n";
	}

	cout << "\nѕерегрузка оператора присваивани€ '='.\n";
	cout << "¬ведите номера экземпл€ров класса: замен€емый и замен€ющий>\n";
	cin >> q;
	cin >> q1;
	if (isvalid(q, q1) != 0) exit(-1);
	obj[q] = obj[q1];

	cout << "‘ирма,  оличество продуктов, √одовой обьем продаж, „асть рынка($): \n";
	for (i = 0; i < N; i++) {
		obj[i].showall();
		cout << "\n";
	}

	cout << "\nѕерегрузка оператора соответстви€ '=='.\n";
	cout << "¬ведите номера экземпл€ров класса, которые надо сравнить>\n";
	cin >> q;
	cin >> q1;
	if (isvalid(q, q1) != 0) exit(-1);
	obj[q] == obj[q1];

	cout << "\nѕерегрузка оператора суммы '+'.\n";
	cout << "¬ведите номера экземпл€ров класса, которые надо сложить>\n";
	cin >> q;
	cin >> q1;
	if (isvalid(q, q1) != 0) exit(-1);
	firms temp = obj[q] + obj[q1];
	cout << "‘ирма,  оличество продуктов, √одовой обьем продаж, „асть рынка($):";
	temp.getall(n1, t1, s, h);

	cout << "\nѕерегрузка оператора потокового ввода '>>'.";
	cout << "\n¬ведите номер экземпл€ра класса: ";
	cin >> q;
	if ((q > N - 1) || (q < 0)) { cout << "ќшибка! Ёкземпл€ра с таким индексом не существует."; _getch(); exit(-1); }
	cin >> obj[q];

	cout << "\nѕерегрузка оператора потокового вывода '<<'.";
	cout << "\n¬ведите номер экземпл€ра класса: ";
	cin >> q;
	if ((q > N - 1) || (q < 0)) { cout << "ќшибка! Ёкземпл€ра с таким индексом не существует."; _getch(); exit(-1); }
	cout << obj[q];

	_getch();
	return 0;
}