
#include"Lab6.h"

int main()
{
	setlocale(LC_ALL, "rus");
	int k = 0;

	discipline objs[7];

	for (int a = 0; !a;)
	{
		cout << "1. Добавить дисциплины" << endl;
		cout << "2. Сортировать дисциплины" << endl;
		cout << "3. Печать" << endl;
		cout << "4. Выход"<<endl;
		cout << "> ";
		int p;
		cin >> p;
		switch (p)
		{
		case 1:
		{
			objs[0].change(111051, "Математика",  "Строгая ");
			objs[1].change(464387, "Физика", "Строгая");
			objs[2].change(458064, "Физкультура",  "Не Строгая");
			objs[3].change(900244, "Биология", "Строгая");
			objs[4].change(545487, "Мова", "Строгая");
			objs[5].change(745664, "Этика", "Не Строгая");
			objs[6].change(423612, "Труд", "Не Строгая");
			k = 1;
			break;
		}
		case 2:
		{
			if (k == 0)
			{
				cout << "В базе нет записей.";
				getchar();
			}
			else if (k == 1)
				sort(objs, 7);
			break;
		}

		case 3:
		{
			if (k == 0)
				cout << "В базе нет записей.";
			else if (k == 1)
				show(objs, 7);
			getchar();
			break;
		}
		case 4:
		{
			a = 1;
			break;
		}
		default:
		{
			cout << "Неверный вызов!";
			getchar();
			break;
		}
		}
	}
	return 0;
}