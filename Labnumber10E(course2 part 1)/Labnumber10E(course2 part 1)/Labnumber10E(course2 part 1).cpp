#include "Labnumer10E.h"

int main()
{
	setlocale(LC_ALL, "rus");

	int n;
	int m;
	int si, sj, ix, ij;

	cout << "������� ������ �������: " << endl;
	cin >> n;

	cin >> m;
	Matrix a(n, m);
	for (;;) {
		int menu;
		srand(time(NULL));

		cout << "1 ��������� ������� 2 ������� ������ 3 ����� ������������ ��������" << endl;
		cout << "4 ��������� �������� �� ������� � ������ 5 ��������� ����������" << endl;
		cin >> menu;
		switch (menu) {
		case(1):
			a.randArr();
			break;
		case(2):
			a.showArr();
			break;
		case(3):
			a.findMin();
			break;
		case(4):
			int x;
			int y;

			cout << "������� x: ";
			cin >> x;

			cout << "������� y: ";
			cin >> y;
			a.findElement(x, y);
			break;

		case(5):

			cout << "� ����� ������� : ";
			cin >> si;
			cin >> sj;
			cout << "������ �������: ";
			cin >> ix;
			cin >> ij;
			if (si + ix <= n || sj + ij <= m)
				a.getNewArr(si, sj, ix, ij);
			else
				cout << "������� ������ ��������" << endl;
			break;
		default:
			exit(0);

		}
	}
}
