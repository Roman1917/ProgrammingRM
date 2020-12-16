#include "Staff.h"
#include <iostream>
using namespace std;

void Staff::insert()
{
	Person person;
	this->personForAge.insert(std::pair<Person, Person>(person, person));
	this->personForName.insert(std::pair<Person, Person>(person, person));

}

void Staff::insert(Person& person)
{
	this->personForAge.insert(std::pair<Person, Person>(person, person));
	this->personForName.insert(std::pair<Person, Person>(person, person));
}

void Staff::print()
{
	cout << "¬ыведем список упор€доченный по имени" << endl;
	for (auto a : personForName)
	{
		cout << a.second.get_name() << " " << a.second.get_age() << endl;
	}
	cout << endl;
	cout << "¬ыведем список упор€доченный по возрасту" << endl;
	for (auto a : personForAge)
	{
		cout << a.second.get_name() << " " << a.second.get_age() << endl;
	}
	cout << endl;
}

void Staff::print(const int field)
{

	for (auto a : personForName)
	{
		if (field == Staff::NAME) {
			cout << a.second.get_name() << endl;
		}
		else if (field == Staff::AGE) {
			cout << a.second.get_age() << endl;
		}

	}
	cout << endl;

}

void Staff::removeByName(string name)
{
	for (auto &a : personForName) {
		if (a.second.get_name() == name) {
			personForName.erase(a.second);
			break;
		}
	}
	for (auto &b : personForAge) {
		if (b.second.get_name() == name) {
			personForAge.erase(b.second);
			break;
		}
	}
}

list<Person>  Staff::searchName(string name)
{
	list<Person> ret;
	for (auto a : personForAge) {
		if (a.second.get_name() == name) {
			ret.push_back(a.second);
		}
	}
	return ret;
}

list<Person> Staff::searchAge(int age)
{
	list<Person> ret;
	for (auto a : personForName) {
		if (a.second.get_age() == age) {
			ret.push_back(a.second);
		}
	}
	return ret;
}