#pragma once
#include <iostream>
#include <vector>

using namespace std;

class Number
{
public:
	Number(unsigned long int number);

	long int getNumber();

private:
	unsigned long int number;
};



