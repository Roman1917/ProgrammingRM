
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

	cout << "Демонстрация работы с классом Staff." << endl
		<< "используя ф-цию вставки добавим персонал." << endl << endl;

	Person a("Бережный", 26), b("Тараненко", 36), c("Зенина", 19), d("Петров", 42);
	staff.insert(a);
	staff.insert(b);
	staff.insert(c);
	staff.insert(d);
	cout << "Выведем данные персонала на монитор" << endl << endl;
	staff.print();

	while (dt != 0) {
		cout << "1. Добавление персонала " << endl;
		cout << "2. Печать всех полей " << endl;
		cout << "3. Печать поля Name" << endl;
		cout << "4. Печать поля Age" << endl;
		cout << "5. Удаление по фамилии" << endl;
		cout << "6. Поиск по Фамилии" << endl;
		cout << "7. Поиск по возрасту" << endl;
		cout << "0. Выход" << endl << endl;
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
			cout << "введите фамилию name = ";
			std::cin.ignore(32767, '\n');
			std::getline(cin, name);
			staff.removeByName(name);
			break;
		case 6:
			cout << "введите фамилию name = ";
			std::cin.ignore(32767, '\n');
			std::getline(cin, name);
			listDate = staff.searchName(name);
			if (listDate.empty()) {
				cout << "объект не найден" << endl;
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
			cout << "введите возраст age = ";
			cin >> age;
			listDate = staff.searchAge(age);
			if (listDate.empty()) {
				cout << "Объект не найден" << endl;
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
			cout << "Данные введены некорректно";
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