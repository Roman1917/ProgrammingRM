
#include "Lab3B.h"
int main()
{
	setlocale(LC_ALL, "rus");

	Library array[3];
	array[0] = Library("Treasure", "Endy", 250,5,true);
	array[1] = Library("Games", "Adams", 840,11, false);
	array[2] = Library("Jungle", "Thomas", 180,1,true);

	int c;
	string x;
	for (;;) {
		cout << "1- ����� �� �������� " << endl << " 2- ���� �� ����� � ����������" << endl<< " 3- ��������" << endl;
		cin >> c;
		switch (c) {
		case(1):
			cout << "������� �������� �����" << endl;
			cin >> x;
			for (int i = 0; i < 3; i++) {
				if (array[i].name == x) {
					cout << array[i].name << " - ����� ����" << endl;

				}
				else cout << array[i].name << "- ����� ��� " << endl;

			}
			
			break;

		case(2):

			for (int i = 0; i < 3; i++) {
				if (array[i].point == true) {
					cout << array[i].name<<" - ����� ����" << endl;
					
				}
				else cout << array[i].name << "- ����� ��� " << endl;

			}

			break;
		case(3):
		
			array[0].point = false;
			cout << "����� Treasure ������� ��������" << endl;	
			for (int i = 0; i < 3; i++) {
				if (array[i].point == true) {
					cout << array[i].name << " - ����� ����" << endl;

				}
				else cout << array[i].name << "- ����� ��� " << endl;

			}

			break;

			cout << endl;
		}

	}
}