#include "Lab4.h"
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char* n;
	char t;
	unsigned int s;
	float h;
	short i;
	short q, q1;
	DB* tmp = new DB("\nБАЗА ДАННЫХ ?1\n");

	for (int a = 0; !a;)
	{
		cout << "1. Добавить запись\n";
		cout << "2. Удалить запись\n";
		cout << "3. Сортировать базу\n";
		cout << "4. Вывести базу\n";
		cout << "5. Выход\n";
		cout << "> ";
		int p;
		cin >> p;
		switch (p)
		{
		case 1:
			tmp->add_rec("Oracle", '1' , 2488000, 31.1);
			tmp->add_rec("IBM", '3', 2392000, 29.9);
			tmp->add_rec("Windows", '2', 1048000, 13.1);
			break;
		case 2:
			tmp->del_rec();
			break;
		case 3:
			tmp->sort_DB();
			break;
		case 4:
			cout << *tmp;
			cout << "\nНажмите клавишу для продолжения...";
			getchar();
			break;
		case 5:
			a = 1;
			break;
		default:
			cout << "Неверный вызов";
			getchar();
			break;
		}
	}
	return 0;
}