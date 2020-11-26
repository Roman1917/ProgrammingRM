#pragma once

#include <iomanip>
#include <iostream>
using namespace std;
template <typename T, typename V>
class Number {
public:
	T number_int;
	V number_double;

	Number() {
		number_int = 5;
		number_double = 1.3;
	}

	Number(T x, V y) {
		number_int = x;
		number_double = y;
	}

	Number operator+(const Number& other) {
		Number temp;
		temp.number_int = this->number_int + other.number_int;
		temp.number_double = this->number_double + other.number_double;
		return temp;
	}

	T show() {
		cout << number_int << "  " << number_double << endl;
		return 0;
	}

	~Number() {};
};


