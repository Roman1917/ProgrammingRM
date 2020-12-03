#pragma once

#include <iostream>
#include <stdio.h>
using namespace std;


class B1 {
	int a;
public:
	B1();
	B1(int a);

	virtual void show();
};
class B2 {
	int b;
public:
	B2();
	B2(int b);

	virtual void show();
};

class D1 : private B1, public B2 {
	int c;
public:
	D1(int a, int b, int c);
	void show() override;
};

class D2 : public D1 {
	int d;
public:
	D2(int a, int b, int c, int d);
	void show() override;
};

class D3 : private D1 {
	int e;
public:
	D3(int a, int b, int c, int e);
	void show() override;
};


