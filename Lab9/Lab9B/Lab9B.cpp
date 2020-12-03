#include "Name.h"
#include "Number.h"


extern vector<Name> ob1;
extern vector<Number> ob2;
map<string, unsigned long int> arr;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	//for (int i = 0; i < ob1.size(); i++) //����� ������� 
	//{
	//    cout << ob1[i].getName() << " : " << ob2[i].getNumber() << endl;
	//}

	for (int i = 0; i < ob1.size(); i++) // ���������� map
	{
		arr.emplace(ob1[i].getName(), ob2[i].getNumber());
	}



	for (;;) {
		int menu;
		string key;
		char letter;

		cout << "1. ������� map" << endl;
		cout << "2. ����� �� �����" << endl;
		cout << "3. ���������� ����, � ���� ������� ���������� �� �����: " << endl;
		cout << "4. ������� ����, � ���� ������� ���������� �� �����: " << endl;

		cin >> menu;

		switch (menu) {
		case 1:

			show(arr);

			break;
		case 2:
			cout << "������� ���� > ";
			cin >> key;
			findByKey(arr, key);
			break;
		case 3:
			cout << "������� ����� > ";
			cin >> letter;
			findAllByLetter(arr, letter);
			break;
		case 4:
			cout << "������� ����� > ";
			cin >> letter;

			deleteAllByLetter(letter);
			break;
		default:
			exit(0);
			break;
		}
		system("pause");


	}




	//map<Name,Number> arr;
	//
	//arr.emplace( ob1, ob2 );
	//for (const auto& p : arr)
	//    cout << p.first << " " << p.second << endl;
}

