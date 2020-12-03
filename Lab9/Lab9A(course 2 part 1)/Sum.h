#pragma once
#include <iostream>
#include <Windows.h>
#include <vector>
using namespace std;

class Sum
{
public:
	Sum();
	Sum(int a, int b);
	int getSum();
	Sum operator==(Sum& o1);

private:
	int a;
	int b;
	int sum;
	void createSum();
};


void showAll(vector<Sum> ob);
void biggest(vector<Sum> ob, int i, int j); 
