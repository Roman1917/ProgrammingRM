#pragma once
#include <string>
#include <iostream>
using namespace std;

class Create
{
public:
	Create();
	Create(string);
	string _show();
	friend ostream& operator<<(ostream&, Create&);
private:
	string text;
};

