#include "Sum.h"

Sum::Sum()
{
	a = 0;
	b = 0;
	createSum();
}

Sum::Sum(int a, int b)
{
	this->a = a;
	this->b = b;
	createSum();
}

int Sum::getSum() {
	return sum;
}

void Sum::createSum() {
	this->sum = a + b;
}

Sum Sum::operator==(Sum& o1) {
	if (this->getSum() == o1.getSum())
		cout << this->getSum() << " = " << o1.getSum() << endl;
	else if (this->getSum() < o1.getSum())
		cout << this->getSum() << " < " << o1.getSum() << endl;
	else if (this->getSum() > o1.getSum())
		cout << this->getSum() << " > " << o1.getSum() << endl;
	return *this;
}


void showAll(vector<Sum> ob) {
	for (int i = 0; i < ob.size(); i++)
	{
		cout << i << ". a + b = " << ob[i].getSum() << endl;
	}
}

void biggest(vector<Sum> ob, int i, int j) {
	cout << "ob" << i << " ? ob" << j << "  ";
	ob[i] == ob[j];
}