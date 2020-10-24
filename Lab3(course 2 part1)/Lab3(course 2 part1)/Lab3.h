#pragma once

#include <iostream>
#include <stdio.h>
using namespace std;

class B
{
	int a;
public:
	B() : a(0) {};
	B(int x) { a = x; }
	void show_B() { cout << "B=   " << a << endl; }
};

class D1 : private B {
	int b;
public:
	D1(int x, int y) : B(y) { b = x; };
	void show_D1() { cout << "D1=  " << b << "\n"; show_B(); }
};

class D2 : public B {
	int c;
public:
	D2(int x, int y) : B(y) { c = x; };
	void show_D2() { cout << "D2=  " << c << "\n"; show_B(); }
};

class D3 : protected D1 {
	int d;
public:
	D3(int x, int y, int z) : D1(y, z) { d = x; }
	void show_D3() { cout << "D3=  " << d << "\n"; show_D1(); }
};

class D4 : public D1, private D2 {
	int e;
public:

	D4(int x, int y, int z, int i, int j) : D1(y, z), D2(i, j) { e = x; }
	void show_D4() { cout << "D4=  " << e << "\n"; show_D1(); show_D2(); }
};