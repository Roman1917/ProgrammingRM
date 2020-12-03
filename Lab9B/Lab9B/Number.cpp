#include "Number.h"

vector<Number> ob2 = {
	Number(686130289),
	Number(660861003),
	Number(111161003),
	Number(999698911),
	Number(666763002)
};

Number::Number(unsigned long int number)
{
	this->number = number;
}

long int Number::getNumber() {
	return number;
}