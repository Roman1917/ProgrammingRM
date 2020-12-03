#pragma once
#include "Humans.h"
#include <string>
#include <time.h>
#define K 6
using namespace std;

class VUZ
{
protected:
public:
	Persona** Shtat;
	VUZ();
	Persona* GetPerson(int _i);
	void printPrepodsUnder50();
	void printDolzhniki();
	void printall();
	~VUZ();
};


