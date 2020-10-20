#include"Lab11D.h"
#include<iostream>
#include<vector>
#include <algorithm>
Sets::Sets() {
	while (numbers.size() <= 10)
		numbers.insert(rand() % 41 - 20);
}

Sets::Sets(int min_elem, int max_elem, int number) {
	while (numbers.size() <= number)
		numbers.insert(min_elem + (rand() % (max_elem - min_elem + 1)));
}

Sets::Sets(set<int> set_, int n) {
	numbers.clear();
	set<int> ::iterator it = set_.begin();
	for (int i = 0; i < n; i++) {
		numbers.insert(*(it));
		it++;
	}
}

set<int> Sets::GetSet() {
	return numbers;
}

int Sets::MaxElem() {
	set<int> ::iterator it = numbers.end();
	it--;
	return *(it);
}


void Sets::Print() {
	for (set<int> ::iterator i = numbers.begin(); i != numbers.end(); i++)
		cout << *i << ' ';
	cout << endl;
}
set<int> union_set(Sets a, Sets b) {
	set<int> a1 = a.GetSet(), b1 = b.GetSet();
	vector<int> res;
	set<int> result;
	set_union(a1.begin(), a1.end(),
		b1.begin(), b1.end(),
		back_inserter(res));
	result.insert(res.begin(), res.end());
	return result;
}

set<int> intersection_set(Sets a, Sets b) {
	set<int> a1 = a.GetSet(), b1 = b.GetSet();
	vector<int> res;
	set<int> result;
	set_intersection(a1.begin(), a1.end(),
		b1.begin(), b1.end(),
		back_inserter(res));
	result.insert(res.begin(), res.end());
	return result;
}

set<int> difference_set(Sets a, Sets b) {
	set<int> a1 = a.GetSet(), b1 = b.GetSet();
	vector<int> res;
	set<int> result;
	set_difference(a1.begin(), a1.end(),
		b1.begin(), b1.end(),
		back_inserter(res));
	result.insert(res.begin(), res.end());
	return result;
}

set<int> symmetric_difference_set(Sets a, Sets b) {
	set<int> a1 = a.GetSet(), b1 = b.GetSet();
	vector<int> res;
	set<int> result;
	set_symmetric_difference(a1.begin(), a1.end(),
		b1.begin(), b1.end(),
		back_inserter(res));
	result.insert(res.begin(), res.end());
	return result;
}

//#include "Lab11D.h"
//int *Union(int arr1[], int arr2[], int size1, int size2) {
//	static int *arr = new int[size1 + size2];
//	for (int i = 0; i < size1; i++) {
//		arr[i] = arr1[i];
//	}
//
//	for (int i = 0; i < size2; i++) {
//		arr[size1 + i] = arr2[i];
//	}
//
//	return arr;
//}
//
//ostream& operator<<(ostream& stream, int* un_arr) {
//
//	for (size_t i = 0; i < 10; i++)
//	{
//		stream << un_arr[i];
//	}
//
//	return stream;
//}
//
//int* Intersection(int arr1[], int arr2[], int size1, int size2) {
//	int n;
//	int k = 0;
//	if (size1 <= size2)
//		n = size1;
//	else
//		n = size2;
//
//
//	static int *arr = new int[n];
//
//	for (int i = 0; i < size1; i++) {
//		for (int j = 0; j < size2; j++) {
//			if (arr1[i] == arr2[j]) {
//				arr[k] = arr[i];
//				k++;
//			}
//		}
//	}
//
//	return arr;
//}
//
//
//int* Difference(int arr1[], int arr2[], int size1, int size2) {
//	int n;
//	int k = 0;
//	if (size1 <= size2)
//		n = size1;
//	else
//		n = size2;
//
//
//	static int* arr = new int[n];
//
//	for (int i = 0; i < size1; i++) {
//		for (int j = 0; j < size2; j++) {
//			if (arr1[i] != arr2[j]) {
//				arr[k] = arr[i];
//				k++;
//			}
//		}
//	}
//
//	return arr;
//}
//
//int* Disjunc(int arr1[], int arr2[], int size1, int size2) {
//	int k = 0;
//
//	bool New = false;
//
//	// ошибка 
//	int* test_arr = new int[size1 + size2];
//	int* arr;
//
//	for (int i = 0; i < size1; i++) {
//		for (int j = 0; j < k; j++) {
//			if (arr1[i] != test_arr[j]) {
//				New = true;
//				k++;
//			}
//		}
//
//		if (New) {
//			New = false;
//			test_arr[k] = arr1[i];
//
//		}
//	}
//
//	for (int i = 0; i < size2; i++) {
//		for (int j = 0; j < k; j++) {
//			if (arr2[i] != test_arr[j]) {
//				New = true;
//				k++;
//			}
//		}
//
//		if (New) {
//			New = false;
//			test_arr[k] = arr2[i];
//		}
//	}
//
//	arr = new int[k + 1];
//
//	for (int i = 0; i < k + 1; i++) {
//		arr[i] = test_arr[k];
//	}
//
//	return arr;
//}