
#pragma once

#include <map>
#include <list>
#include "Person.h"
using namespace std;

class Staff
{


	
	map<Person, Person, cmpPerson> personForAge;		// и для сортировки по возрасту (используя функтор).
	map<Person, Person> personForName;					//сортировка по имени используется оператор <

public:
	static const int AGE = 0;
	static const int NAME = 1;
	void insert();						
	void print();						
	void print(const int field);		//печать одного поля 
	void removeByName(string Name);		
	void insert(Person& person);		//Вставка 
	list<Person> searchName(string name);	//поиск по имени
	list<Person> searchAge(int age);	//поиск по возрасту

};