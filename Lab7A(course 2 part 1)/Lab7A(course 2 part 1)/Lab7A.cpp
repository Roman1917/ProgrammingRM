#include "Lab7A.h"

COMP::COMP() {
	this->first = 0;
	this->second = 0;
}

COMP::COMP(double first, double second) {
	this->first = first;
	this->second = second;
}

double COMP::First() {
	return this->first;
}

void COMP::First(double first) {
	this->first = first;
}

double COMP::Second() {
	return this->second;
}

void COMP::Second(double second) {
	this->second = second;
}