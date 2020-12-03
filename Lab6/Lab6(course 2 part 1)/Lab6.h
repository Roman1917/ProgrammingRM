#pragma once
#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <iomanip>
#include <string>     
#include "windows.h"
using namespace std;
class discipline
{
public:
	discipline()
		: hours(0), name(nullptr), control(nullptr)
	{
	}

	void change(int _hours, const char* _name, const char* _control);

	void setName(const char* _name);

	long getHours() const;
	const char* getName() const;
	const char* getControl() const;

private:
	char *name; //long  number;
	long hours;//char* data;
	char* control;//int   lock;
	//char* name;
};
void sort(discipline* objs, int count);
void show(discipline* objs, int count);

