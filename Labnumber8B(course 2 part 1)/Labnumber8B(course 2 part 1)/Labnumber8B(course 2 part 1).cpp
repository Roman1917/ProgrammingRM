#include <ctime>
#include <iostream>
#include <iomanip>
#include "Lab8B.h"
#define N 8

int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "rus");
	Array<int> arr(N);
	for (int i = 0; i < N; i++)
		arr.Init_one(rand() % 55 - 10, i);  
	try {
		arr.Init_one(33, 3); 
	}
	catch (int exception) {
		cout << "Code: " << exception << endl;
	}
	cout <<"Сумма: "<<arr.SumMas() << endl;
	cout <<"Среднее значение: " <<arr.Average() << endl;
	cout << "Значения массива: ";
	arr.Show();
	return 0;
}
