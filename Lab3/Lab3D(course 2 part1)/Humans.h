#pragma once

#include <iostream>
#include <string>
using namespace std;

class Persona {
protected:
	string name, surname, patronymic;
	int age;
public:
	Persona();
	virtual int who() = 0;
	virtual int ask() = 0;
	virtual void print() = 0;
	int GetAge() { return age; }
	string GetName() { return name; }
	string GetSurname() { return surname; }
	string GetPatronymic() { return patronymic; }
};

class Prepod : public Persona {
protected:
	string discipline;
	int stepen;
public:
	Prepod();
	virtual int who() override;
	virtual int ask() override;
	virtual void print() override;
};

class Student : public Persona {
protected:
	int ranks[5];
public:
	Student();
	int who() override;
	int ask() override;
	void print() override;
};

class Zav_Kaf : public Prepod {
protected:
	int post;
public:
	Zav_Kaf();
	int who() override;
	int ask() override;
	void print() override;
}; 
