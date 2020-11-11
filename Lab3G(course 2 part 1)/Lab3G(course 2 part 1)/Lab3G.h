#pragma once
#include <vector>
#include <iostream>
#include <conio.h> 
#include <windows.h>
#include <ctime>
using namespace std;

class Figure {
protected:
	int x, y;

public:
	virtual void show() {}

	void setX(int a) {
		this->x = a;
	}
	void setY(int b) {
		this->y = b;
	}

};

class Figure1 : public Figure {
public:
	void show()override {
		cout << "Площадь треугольника: " << (x*x*sqrt(3)) / 4 << endl;
	}
};

class Figure2 : public Figure1 {
public:
	void show()override {
		cout << "Площадь прямоугольника: " << x * y << endl;
	}

};

class Figure3 : public Figure2 {
public:
	double pi = 3.14;
	int k = 0;
	void area(int a = 3) {
		k = a * a*pi;
	}
	void show()override {
		cout << "Площадь круга: " << k << endl;
	}
};
