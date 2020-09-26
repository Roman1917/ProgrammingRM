#include "Labnumer10E.h"

int main()
{
	setlocale(LC_ALL, "rus");

	int n;
	int m;
	int si, sj, ix, ij;

	cout << "Введите размер матрицы: " << endl;
	cin >> n;

	cin >> m;
	Matrix a(n, m);
	for (;;) {
		int menu;
		srand(time(NULL));

		cout << "1 Генерация массива 2 Вывести массив 3 Поиск минимального значения" << endl;
		cout << "4 Получение элемента по позиции и запись 5 Получение подматирцы" << endl;
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

			cout << "Введите x: ";
			cin >> x;

			cout << "Введите y: ";
			cin >> y;
			a.findElement(x, y);
			break;

		case(5):

			cout << "С какой позиции : ";
			cin >> si;
			cin >> sj;
			cout << "размер матрицы: ";
			cin >> ix;
			cin >> ij;
			if (si + ix <= n || sj + ij <= m)
				a.getNewArr(si, sj, ix, ij);
			else
				cout << "введите другие значения" << endl;
			break;
		default:
			exit(0);

		}
	}
}
