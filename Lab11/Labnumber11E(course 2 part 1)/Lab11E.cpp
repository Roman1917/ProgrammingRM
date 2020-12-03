#include "Lab11E.h"

ostream& operator<<(ostream& s, const Time& time) {
	s <<"Hours:"<<time.hour << " Minutes:" << time.minute << " Seconds:" << time.second << endl;
	return s;
} 

void Time::Set_all(int h, int m, int s) {
	this->hour = h;
	this->minute = m;
	this->second = s;
	adjust_time();
}

void Time::minus_time() {
	while (second < 0)
	{
		second +=60 ;
		minute -= 1;
	}

	while (minute < 0)
	{
		minute += 60;
		hour -= 1;
	}
	while (hour < 0)
	{
		hour = -hour;
	}
	cout << endl;
}

 void Time:: adjust_time() {
	 while (second>=60)
	 {
		 second -= 60;
		 minute += 1; 
	 }

	 while (minute >= 60)
	 { 
		 minute -= 60;
		 hour += 1;
	 }
	 while (hour >= 24)
	 {
		 hour -= 24;
	 }

	 cout << endl;
}

 int Time::Fun(Time& v1) {
	 this->hour = v1.hour;
	 this->minute = v1.minute;
	 this->second = v1.second;
	 float result;
	 if (hour > 12) { hour -= 12; }
	 result = abs(360 / 12 * hour + 0.5*minute - 360 / 60 * minute);
	 if (result > 180) { result = 360 - result; }
	 cout << "Угол между часовой и минутной стрелкой в грудсах:" << result << endl;
	 return 0;
 }

 void Time::menu() {
	 cout << "1- Введите часы, минуты, секунды" << endl;
	 cout << "2- Вывод значений на екрна" << endl;
	 cout << "3- Доблание времени" << endl;
	 cout << "4- Разность времен двух обьектов" << endl;
	 cout << "5- Сравнение двух обьектов" << endl;
	 cout << "6- Угол между часовой и минутной срелками" << endl;
 }

 void Time::input() {
	 cout << "Введите hour - ";
	 cin >> hour;
	 cout << "Введите minute - ";
	 cin >> minute;
	 cout << "Введите second - ";
	 cin >> second;
 }

 void Time::_minuseTime1(Time& v1, Time& v2)
 {
	 this->hour = v1.hour - v2.hour;
	 this->minute = v1.minute - v2.minute;
	 this->second = v1.second - v2.second;
 }
 void Time::_plusTime1(Time& v1, Time& v2)
 {
	 this->hour = v1.hour + v2.hour;
	 this->minute = v1.minute + v2.minute;
	 this->second = v1.second + v2.second;
 }
 void Time::_compareTime1(Time& v1, Time& v2)
 {
	 if (v1.hour == v2.hour&&v1.minute == v2.minute&&v1.second == v2.second) {
		 cout << "Обькты равны" << endl;
	 }
	 else cout << "Обьекты не равны" << endl;

 }

 void Time::show1(Time& v1, Time& v2) {
	 cout<< "Hours:" << v1.hour << " Minutes:" << v1.minute << " Seconds:" << v1.second << endl;
	 cout << "Hours:" << v2.hour << " Minutes:" << v2.minute << " Seconds:" << v2.second << endl;
 }
 