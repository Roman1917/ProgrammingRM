#pragma once
#include <iostream>
#include <algorithm> 
#include <string>
#include <iomanip>
#define N 5
using namespace std;

class Train
{
private:

	string point;
	int num;
	string time;

public:
	// функции члены
	void sortNum(Train* base);
	void searchForNum(Train* base, int num);
	void sortPoint(Train* base);
	void pointTime(Train* base, int j);
	void input(Train* base, int i);
	void menu();
	void show(Train* base);
};
