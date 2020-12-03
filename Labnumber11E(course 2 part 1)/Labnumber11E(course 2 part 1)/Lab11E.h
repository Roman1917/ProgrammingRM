#pragma once

#include <iostream>
#include <iomanip>
#include <ctime>
#include <ostream>
#define N 2

using namespace std;

class Time {
private:
	int hour;
	int minute;
	int second;
public:

	Time() { hour = 0; minute = 0; second = 0; }
	void adjust_time();
	void minus_time();
	int Get_all() {return hour, minute, second;}
	void Set_all(int h, int m, int s);
	friend ostream& operator<<(ostream& s, const Time& time);
	void _minuseTime1(Time& v1, Time& v2);
	void _plusTime1(Time& v1, Time& v2);
	void _compareTime1(Time& v1, Time& v2);
	int Fun(Time& v1);
	void show1(Time& v1, Time& v2);
	void menu();	
	void input();

};