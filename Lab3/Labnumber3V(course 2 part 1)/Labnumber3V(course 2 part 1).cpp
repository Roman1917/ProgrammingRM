#include "Lab3V.h"
#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;
#define N 100

int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "rus");
	Pro *number[N];

	for (int i = 0; i < N; i++) {
		number[i] = new Pro5 (rand()%100);
	}

	for (int i = 0; i < N; i++) {
		if (number[i]->get())
			cout << "Число номер: " << i << " Число: " << number[i]->get() << endl;
	}
	system("pause");
	return 0;
}

