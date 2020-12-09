#include <ctime>
#include <iostream>
#include "Lab8B.h"
#define N 10
using namespace std;

int main()
{
	srand(time(NULL));
	
	Array<int> arr(N);
	for (int i = 0; i < N; i++)
		arr.SetOneElement(rand() % 40 - 20, i);  
	try {
		arr.SetOneElement(-100, 3); //try 11
	}
	catch (int ex) {
		cout << "Code: " << ex << endl;
	}
	cout << arr.Subsum() << endl;
	cout << arr.Average() << endl;
	cout << arr.max << endl;
	arr.Show();
	return 0;
}
