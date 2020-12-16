
#include <iostream>
#include <Windows.h>
#include"Staff.h"
using namespace std;

void demoStaff() {
	int dt = -1;
	Staff staff;
	string name;
	int age = 0;
	list<Person> listDate;
	Person* person = NULL;

	cout << "������������ ������ � ������� Staff." << endl
		<< "��������� �-��� ������� ������� ��������." << endl << endl;

	Person a("��������", 26), b("���������", 36), c("������", 19), d("������", 42);
	staff.insert(a);
	staff.insert(b);
	staff.insert(c);
	staff.insert(d);
	cout << "������� ������ ��������� �� �������" << endl << endl;
	staff.print();

	while (dt != 0) {
		cout << "1. ���������� ��������� " << endl;
		cout << "2. ������ ���� ����� " << endl;
		cout << "3. ������ ���� Name" << endl;
		cout << "4. ������ ���� Age" << endl;
		cout << "5. �������� �� �������" << endl;
		cout << "6. ����� �� �������" << endl;
		cout << "7. ����� �� ��������" << endl;
		cout << "0. �����" << endl << endl;
		cin >> dt;
		switch (dt)
		{
		case 1:
			staff.insert();
			break;
		case 2:
			staff.print();
			break;
		case 3:
			staff.print(Staff::NAME);
			break;
		case 4:
			staff.print(Staff::AGE);
			break;
		case 5:
			cout << "������� ������� name = ";
			std::cin.ignore(32767, '\n');
			std::getline(cin, name);
			staff.removeByName(name);
			break;
		case 6:
			cout << "������� ������� name = ";
			std::cin.ignore(32767, '\n');
			std::getline(cin, name);
			listDate = staff.searchName(name);
			if (listDate.empty()) {
				cout << "������ �� ������" << endl;
			}
			else {
				for (auto a : listDate) {
					cout << "name = " << a.get_name() << '\t'
						<< "age = " << a.get_age() << endl;
				}
				cout << endl;
			}
			listDate.clear();
			break;
		case 7:
			cout << "������� ������� age = ";
			cin >> age;
			listDate = staff.searchAge(age);
			if (listDate.empty()) {
				cout << "������ �� ������" << endl;
			}
			else {
				for (auto a : listDate) {
					cout << "name = " << a.get_name() << '\t'
						<< "age = " << a.get_age() << endl;
				}
				cout << endl;
			}
			listDate.clear();
			break;

		case 0:
			break;
		default:
			cout << "������ ������� �����������";
			break;
		}

	}

}

int main() {
	//setlocale(LC_ALL, "ru_UA");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	demoStaff();
	return 0;
}