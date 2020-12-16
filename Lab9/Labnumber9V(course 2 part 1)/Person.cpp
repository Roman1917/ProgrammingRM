#include "Person.h"
#include <iostream>
using namespace std;

Person::Person()
{
	cout << "введите фамилию name = ";
	std::cin.ignore(32767, '\n');
	std::getline(cin, name);
	cout << "введите возраст age = ";
	cin >> this->age;
}

Person::Person(string name)
{
	this->name = name;
	cout << "name = " << name << endl;
	cout << "введите возраст age = ";
	cin >> this->age;
}

Person::Person(int age)
{
	cout << "введите фамилию name = ";
	this->age = age;
	cout << "age = " << age << endl;
	std::cin.ignore(32767, '\n');
	std::getline(cin, name);
}

Person::Person(string name, int age)
{
	this->age = age;
	this->name = name;
}

bool operator<(const Person& A, const Person& B)
{
	return A.name < B.name;
}

