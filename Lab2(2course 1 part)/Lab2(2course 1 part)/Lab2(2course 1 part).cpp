
#include "Lab2.h"
int isvalid(int a, int b) {
	if (((a > N - 1) || (a < 0)) || ((b > N - 1) || (b < 0)))
	{
		cout << "������! ���������� � ����� �������� �� ����������.\n";
		_getch();
		return -1;
	}
	else if (a == b)
	{
		cout << "������! ��������� �� ����� ���� ������� ��� � ����.\n";
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
	cout << "�����, ���������� ���������, ������� ����� ������, ����� �����($): \n";
	for (i = 0; i < N; i++) {
		obj[i].showall();
		cout << "\n";
	}

	cout << "\n���������� ��������� ������������ '='.\n";
	cout << "������� ������ ����������� ������: ���������� � ����������>\n";
	cin >> q;
	cin >> q1;
	if (isvalid(q, q1) != 0) exit(-1);
	obj[q] = obj[q1];

	cout << "�����, ���������� ���������, ������� ����� ������, ����� �����($): \n";
	for (i = 0; i < N; i++) {
		obj[i].showall();
		cout << "\n";
	}

	cout << "\n���������� ��������� ������������ '=='.\n";
	cout << "������� ������ ����������� ������, ������� ���� ��������>\n";
	cin >> q;
	cin >> q1;
	if (isvalid(q, q1) != 0) exit(-1);
	obj[q] == obj[q1];

	cout << "\n���������� ��������� ����� '+'.\n";
	cout << "������� ������ ����������� ������, ������� ���� �������>\n";
	cin >> q;
	cin >> q1;
	if (isvalid(q, q1) != 0) exit(-1);
	firms temp = obj[q] + obj[q1];
	cout << "�����, ���������� ���������, ������� ����� ������, ����� �����($):";
	temp.getall(n1, t1, s, h);

	cout << "\n���������� ��������� ���������� ����� '>>'.";
	cout << "\n������� ����� ���������� ������: ";
	cin >> q;
	if ((q > N - 1) || (q < 0)) { cout << "������! ���������� � ����� �������� �� ����������."; _getch(); exit(-1); }
	cin >> obj[q];

	cout << "\n���������� ��������� ���������� ������ '<<'.";
	cout << "\n������� ����� ���������� ������: ";
	cin >> q;
	if ((q > N - 1) || (q < 0)) { cout << "������! ���������� � ����� �������� �� ����������."; _getch(); exit(-1); }
	cout << obj[q];

	_getch();
	return 0;
}