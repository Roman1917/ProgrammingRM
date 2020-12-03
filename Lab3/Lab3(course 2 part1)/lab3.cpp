#include "Lab3.h"
//---------------------------B1--------------
B1::B1() {
	cout << "ÊÏ" << endl;
}

B1::B1(int a) {
	this->a = a;
}

void B1::show() {
	cout << "B1= " << a << endl;
}
//--------------------------B2----------------
B2::B2() {
	cout << "ÊÏ" << endl;
}

B2::B2(int b) {
	this->b = b;
}

void B2::show() {
	cout << "B2= " << b << endl;
}

//----------------D1--------------

D1::D1(int a, int b, int c) : B1(a), B2(b) {
	this->c = c;
}

void D1::show() {	
	B1::show();
	B2::show();
	cout << "D1 = " << c << endl;
}

//----------------D2--------------

D2::D2(int a, int b, int c, int d) : D1(a,b,c)  {
	this->d = d;
}

void D2::show() {
	D1::show();
	cout << "D2 = " << d << endl;
}

//----------------D3--------------
D3::D3(int a, int b, int c, int e) : D1(a, b, c) {
	this->e = e;
}

void D3::show() {
	D1::show();
	cout << "D3 = " << e << endl;
}



