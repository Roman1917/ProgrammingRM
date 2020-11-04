#include "Lab2B.h"
#include<iostream>
#include<cstring>
Firms::Firms(string  kolvprod, double sales, float rinok)
{
	this->kolvprod = kolvprod;
	this->sales = sales;
	this->rinok = rinok;
}

bool operator==(const Firms&, const Firms&);

const Firms operator+(const Firms&, const Firms&);

int Firms::operator[] (const char* c)
{
	return strlen(c);
}

void Firms::operator() ()
{
	this->kolvprod = "";
	this->sales = 0;
	this->rinok = 0;
}
bool operator==(const Firms& t1, const Firms& t2)
{
	if (t1.kolvprod == t2.kolvprod && t1.sales == t2.sales && t1.rinok == t2.rinok) return true;
	return false;
}

const Firms operator+(const Firms& t1, const Firms& t2)
{
	if (t2.kolvprod != t1.kolvprod) return t1;
	return Firms(t1.kolvprod, t1.sales + t2.sales, t1.rinok + t2.rinok);
}
string Firms::get_info()
{
	return string(this->kolvprod + " " + to_string(this->sales) + " " + to_string(this->rinok));
}
