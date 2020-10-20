
#include <iostream>
#include <ctime>
#include"Lab11D.h"
using namespace std;

int main()
{
	srand(time(NULL));
	Sets set_1;
	Sets set_2(4, 100, 5);
	Sets set_3(set_1.GetSet(), 5);
	cout << set_1.MaxElem() << endl;
	cout << set_2.MaxElem() << endl;
	cout << set_3.MaxElem() << endl;
	set_1.Print();
	set_2.Print();
	set_3.Print();
	return 0;
}

//#include "Lab11D.h"
//
//int main() {
//	//First task
//	cout << "Enter number of elements, max and min value: ";
//	int n, k, d;
//	cin >> n >> k >> d;
//	arr arra(n, k, d);
//	cout << "Elements of generated array: ";
//	for (int i = 0; i < n; i++)
//		cout << arra.arrint[i] << ", ";
//	cout << endl << endl;
//
//	//Second task
//	arr arra1;
//	cout << "Elements of the second generated array with random values: ";
//	for (int i = 0; i < 10; i++)
//		cout << arra1.arrint[i] << ", ";
//	cout << endl << endl;
//	
//
//	//Third task
//	cout << "Enter size of array that should be generated: ";
//	int size1;
//	int max;
//	cin >> size1;
//	int* arr1 = new int[size1];
//	cout << "Now enter elements of this array: ";
//	for (int i = 0; i < size1; i++) {
//		cout << i << "element: ";
//		cin >> arr1[i];
//	}
//	cout << endl << "Enter max value: ";
//	cin >> max;
//	arr arra2(arr1, size1, max);
//
//	//Forth task
//	cout << "Max element in first array: " << arra.maxValue();
//
//	//Fifth task
//
//	int* un_arr = Union(arra.arrint, arra1.arrint, arra.size, arra1.size);
//	int* inter_arr = Intersection(arra.arrint, arra1.arrint, arra.size, arra1.size);
//	int* diff_arr = Difference(arra.arrint, arra1.arrint, arra.size, arra1.size);
//
//	cout << un_arr;
//	//int* dis_arr = Disjunc(arra.arrint, arra1.arrint, arra.size, arra1.size);
//
//}