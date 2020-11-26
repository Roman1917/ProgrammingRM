#pragma once
#pragma once
#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

class Reload
{
public:
	Reload operator<< (string& str);
};

Reload Reload::operator<< (string& str)
{

	char ch[256], *ptr;

	cout << "¬ведите строку" << endl;
	gets_s(ch);

	ptr = ch;	cout << "Cтрока без больших букв и цыфр" << endl;
	for (; *ptr; ++ptr)
	{
		if (!(isupper(*ptr) || isdigit(*ptr)))
			cout << *ptr;
	}

	cout << endl;

	return *this;
}

