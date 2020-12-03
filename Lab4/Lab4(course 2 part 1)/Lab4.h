#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <iomanip>
#include "windows.h"
using namespace std;

class firms
{
public:

	friend ostream& operator<<(ostream& stream, firms& o1);
	friend istream& operator>>(istream& stream, firms& o1);
	friend void shapka();
	friend void linebuild();

	firms();
	firms(const char* a, char b, unsigned int c, float d);
	void set(const char* a, char b, unsigned int c, float d);
	void get(char* a, char b, unsigned int c, float d);
	void show();
	char* ret_name();
private:
	char* name;
	char kolvprod;
	unsigned int count;
	unsigned short square;
};

class DB
{
	char title[30];
	firms* rows[12];//указатель на 12 екземпл€ров класа 
	int col;
	int sorted;//флаг сортирований или нет
public:
	DB(const char* q);
	~DB();
	void add_rec(const char* a, char b, unsigned int c, float d);
	void del_rec();
	void sort_DB();
	friend ostream& operator<<(ostream& stream, DB& temp);
};