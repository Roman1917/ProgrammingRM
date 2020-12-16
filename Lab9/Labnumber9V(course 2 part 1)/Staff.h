
#pragma once

#include <map>
#include <list>
#include "Person.h"
using namespace std;

class Staff
{


	
	map<Person, Person, cmpPerson> personForAge;		// � ��� ���������� �� �������� (��������� �������).
	map<Person, Person> personForName;					//���������� �� ����� ������������ �������� <

public:
	static const int AGE = 0;
	static const int NAME = 1;
	void insert();						
	void print();						
	void print(const int field);		//������ ������ ���� 
	void removeByName(string Name);		
	void insert(Person& person);		//������� 
	list<Person> searchName(string name);	//����� �� �����
	list<Person> searchAge(int age);	//����� �� ��������

};