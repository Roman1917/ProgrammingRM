/*

Ц перегрузить оператор < Ц ‘. —–ј¬Ќ≈Ќ»я дл€ упор€дочивани€ по name;
Ц перегрузить оператор () Ц ‘”Ќ “ќ– дл€ упор€дочивани€ по age


*/

#pragma once
#include <string>
#include<iostream>

using namespace std;
class cmpPerson;
class Person
{
	string name;
	int age;
public:
	Person();
	Person(string name);
	Person(int age);
	Person(string name, int age); 
	friend  bool operator < (const Person& A, const Person& B);
	string get_name() { return this->name; }
	int get_age() { return this->age; }

	friend cmpPerson;
};

class cmpPerson {
public:
	bool operator ()  (const Person& a, const Person& b) const
	{
		return a.age < b.age;
	}
	bool operator ()  (const int a, const int b) const
	{
		return a < b;
	}
};
#pragma once
