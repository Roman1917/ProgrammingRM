
#include"Lab6.h"

int main()
{
	setlocale(LC_ALL, "rus");
	int k = 0;

	discipline objs[7];

	for (int a = 0; !a;)
	{
		cout << "1. �������� ����������" << endl;
		cout << "2. ����������� ����������" << endl;
		cout << "3. ������" << endl;
		cout << "4. �����"<<endl;
		cout << "> ";
		int p;
		cin >> p;
		switch (p)
		{
		case 1:
		{
			objs[0].change(111051, "����������",  "������� ");
			objs[1].change(464387, "������", "�������");
			objs[2].change(458064, "�����������",  "�� �������");
			objs[3].change(900244, "��������", "�������");
			objs[4].change(545487, "����", "�������");
			objs[5].change(745664, "�����", "�� �������");
			objs[6].change(423612, "����", "�� �������");
			k = 1;
			break;
		}
		case 2:
		{
			if (k == 0)
			{
				cout << "� ���� ��� �������.";
				getchar();
			}
			else if (k == 1)
				sort(objs, 7);
			break;
		}

		case 3:
		{
			if (k == 0)
				cout << "� ���� ��� �������.";
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
			cout << "�������� �����!";
			getchar();
			break;
		}
		}
	}
	return 0;
}