#pragma once


#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <stdio.h>
#include <iomanip>
#include <ostream>
#include <iostream>

using namespace std;
#define N 3  

class firms {
	char* firm;
	char* kolvprod;
	unsigned int sales;
	float square;
	friend istream& operator>>(istream& stream, firms& o1);
	friend ostream& operator<<(ostream& stream, firms& o1);
	friend void shapka(void);
	friend void linebuild(void);
	friend int isvalid(int a, int b);
public:
	firms() { square = 0; sales = 0; }
	firms(char* a, char* b, unsigned int c, float d);
	void setall(char* a, char* b, unsigned int, float);
	void getall(char* a, char* b, unsigned int& c, float& d);
	void showall();

	firms& operator = (firms& o1);
	int    operator == (firms& o1);
	firms operator + (firms& o1);
};



