#pragma once

#include <iostream>
#include<string>
#define N 3
using namespace std;

class Book {
private:

public:
	string name, autor;
	int size;
	Book(string x, string y, int z) {
		this->name = x;
		this->autor = y;
		this->size = z;
	}
	Book() {
		this->name = "Broom";
		this->autor = "Diel";
		this->size = 10;
	}

	void show_1() {
		cout << "  �������� �����: " << name << "  �����: " << autor << "  ���������� �������: " << size << endl;
	}
};

class Library : public Book {
private:

public:
	int Knumber;
	bool point;
	Library(string x, string y, int z, int f, bool p) : Book(x, y, z) {
		Knumber = f;
		point = p;
	}
	Library() {
		Knumber = 10;
		point = true;
	}
	void show_2() {
		cout << "  ����� ��������: " << Knumber << "  �����: " << point << endl;
	}
};
