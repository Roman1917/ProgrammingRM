#include "Humans.h"

Persona::Persona() {
	string surnames[8] = { "��������","������","��������","�����������","������","�������","�������","�������" };
	string names[8] = { "������","����","�������","���������","����","�����","�����","������" };
	string patrons[8] = { "����������","��������","����������","�������������","��������","���������","���������","���������" };
	name = names[rand() % 8];
	surname = surnames[rand() % 8];
	patronymic = patrons[rand() % 8];
	age = (rand() % 60) + 20;
}

Prepod::Prepod()
{
	string disc[5] = { "�������","���������","����.��.","���","���" };
	discipline = disc[rand() % 5];
	stepen = rand() % 3;
}

int Prepod::who()
{
	return 1;
}

int Prepod::ask()
{
	return stepen;
}

void Prepod::print()
{
	cout << "���: " << surname << ' ' << name << ' ' << patronymic << endl
		<< "�������: " << age << " - �������������, ����.������� - " << stepen << endl;
	cout << "���������� - " << discipline << endl;
}

Student::Student() : Persona()
{
	for (int i = 0; i < 5; i++)
	{
		ranks[i] = rand() % 4 + 2;
	}
}

int Student::who()
{
	return 3;
}

int Student::ask()
{
	int fails = 0;
	for (int i = 0; i < 5; i++)
	{
		if (ranks[i] == 2)fails++;
	}
	return fails;
}

void Student::print()
{
	cout << "���: " << surname << ' ' << name << ' ' << patronymic << endl
		<< "�������: " << age << " - �������" << endl << "������:";
	for (int i = 0; i < 5; i++)
	{
		cout << ' ' << ranks[i];
	}
	cout << endl;
}

Zav_Kaf::Zav_Kaf() : Prepod()
{
	Prepod();
	post = rand() % 5;
}

int Zav_Kaf::who()
{
	return 2;
}

int Zav_Kaf::ask()
{
	return Persona::age;
}

void Zav_Kaf::print()
{
	cout << "���: " << surname << ' ' << name << ' ' << patronymic << endl
		<< "�������: " << age << " - ���. �������, ����.������� - " << stepen << endl;
	cout << "���������� - " << discipline << ", ��������� - " << post << endl;
}