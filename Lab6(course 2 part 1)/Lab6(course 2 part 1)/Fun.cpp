#include "Lab6.h"
void discipline::change(int _hours, const char* _name, const char* _control)
{
	hours = _hours;

	if (name)
		free(name);
	name = new char[strlen(_name) + 1];
	strcpy(name, _name);

	if (control)
		free(control);
	control = new char[strlen(_control) + 1];
	strcpy(control, _control);
}

void discipline::setName(const char* _name)
{
	if (name)
		free(name);
	name = new char[strlen(_name) + 1];
	strcpy(name, _name);
}

long discipline::getHours() const
{
	return hours;
}

const char* discipline::getName() const
{
	return name;
}

const char* discipline::getControl() const
{
	return control;
}


void sort(discipline* objs, int count)
{
	discipline t;
	for (int i = 0; i < count; i++)
	{
		for (int j = i + 1; j < count; j++)
		{
			if (objs[i].getHours() > objs[j].getHours())
			{
				t = objs[i];
				objs[i] = objs[j];
				objs[j] = t;
			}
		}
	}
}

void show(discipline* objs, int count)
{
	cout << "                   Дисциплина: \n";
	cout << "---------------------------------------------------\n";
	cout << " Обьем	   Форма контроля	 Название						  \n";
	cout << "---------------------------------------------------\n";

	string s;
	for (int i = 0; i < count; i++)
	{
		s = to_string(objs[i].getHours());
		if (s.length() == 6)
		{
			cout << s[0] << s[1] << s[2] << s[3] << s[4] << s[5];
		}
		else if (s.length() == 7)
		{
			cout << s[0] << s[1] << s[2] << s[3] << s[4] << s[5] << s[6];
		}
		cout << setw(15) << objs[i].getControl();
		cout << setw(20) << objs[i].getName() << endl;

	}
	cout << "--------------------------------------------------\n";
}