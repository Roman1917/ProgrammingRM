#include "Sum.h"
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	vector<Sum> ob;
	//ob.push_back(Sum(4,5));
	//ob.push_back(Sum(4,5));
	//ob.push_back(Sum(1,3));
	//ob.push_back(Sum(3,7));

	for (;;) {
		cout << "1. Добавить объект" << endl;
		cout << "2. Посмотреть все объекты" << endl;
		cout << "3. Сравнить объекты" << endl;
		int menu;
		int i, j;
		cin >> menu;
		switch (menu) {
		case 1:
			cout << "Введите два значения > " << endl;
			cin >> i;
			cin >> j;
			ob.push_back(Sum(i, j));
			break;
		case 2:
			showAll(ob);
			break;
		case 3:
			cout << "Какие обекты хотите сравнить > ";
			cin >> i;
			cin >> j;
			biggest(ob, i, j);
			break;

		}
		system("pause");
	}

	//showAll(ob);
	//
	//for (int i = 0; i < ob.size() - 1; i++)
	//{
	//    biggest(ob, i, i + 1);
	//}

}

/*  v1   1 2  3
		 2 4  6
		 4 1  5

	v2   1 3  4
		 1 5  6
		 1 1  2

			 3<4
			 6=6
			 5<2
*/
