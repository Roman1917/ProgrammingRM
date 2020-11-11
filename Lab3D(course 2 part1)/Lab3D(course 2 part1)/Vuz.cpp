#include "Vuz.h"

VUZ::VUZ()
{
	Shtat = new  Persona*[K];
	for (int i = 0; i < 2; i++)
	{
		Shtat[i] = new Prepod;
	}
	for (int i = 2; i < K - 1; i++)
	{
		Shtat[i] = new Student;
	}
	Shtat[K - 1] = new Zav_Kaf;
}

Persona* VUZ::GetPerson(int _i)
{
	return Shtat[_i];
}

void VUZ::printPrepodsUnder50()
{
	cout << "Печать всех преподавателей младше 50 лет\n\n";
	for (int i = 0; i < K; i++)
	{
		if ((Shtat[i]->who() == 1 || Shtat[i]->who() == 2)
			&& Shtat[i]->GetAge() < 50) {
			Shtat[i]->print();
			cout << endl;
		}
	}
	cout << "\n------------------------------------------------\n";
}

void VUZ::printDolzhniki()
{
	cout << "Печать имен  всех студентов с хотя бы 1 двойкой" << endl;
	for (int i = 0; i < K; i++)
	{
		if (Shtat[i]->who() == 3 && Shtat[i]->ask() > 0) {
			cout << Shtat[i]->GetName() << ' ';
		}
	}
	cout << "\n------------------------------------------------\n";
}

void VUZ::printall()
{
	cout << "Печать всех персон:\n";
	for (int i = 0; i < K; i++)
	{
		Shtat[i]->print();
		cout << endl;
	}
	cout << "\n------------------------------------------------\n";
}

VUZ::~VUZ()
{
	for (int i = 0; i < K; i++)
	{
		delete Shtat[i];
	}
	Shtat = nullptr;
}
