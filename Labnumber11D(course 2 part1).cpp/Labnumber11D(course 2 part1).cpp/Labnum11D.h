#pragma once
#include <iostream>
#include <array>
#include <stdio.h>
#include <iomanip>
#include <time.h>

using namespace std;

int* Union(int arr1[], int arr2[], int size1, int size2);
int* Intersection(int arr1[], int arr2[], int size1, int size2);
int* Difference(int arr1[], int arr2[], int size1, int size2);
int* Disjunc(int arr1[], int arr2[], int size1, int size2);

class arr {
public:
	int* arrint;
	int size;
	int max, min;
	
	arr() {
		this->size = 10;
		arrint = new int[10];
		for (int i = 0; i < 10; i++) {
			arrint[i] = (rand() % 41) - 20;
		}
	}

	arr(int size, int max, int min) {
		this->arrint = new int[size];
		this->size = size;
		for (int i = 0; i < size; i++) {
			arrint[i] = i;
		}
	}

	arr(int arri[], int size, int max) {
		this->size = size;
		int in = 0;
		for (int i = 0; i < size; i++) {
			if (arri[i] < max)
				in++;
		}

		arrint = new int[in];
		in = 0;
		for (int i = 0; i < size; i++) {
			if (arri[i] < max) {
				arrint[in] = arri[i];
				in++;
			}
		}

		cout << "Elements of array: ";
		for (int i = 0; i < size; i++) {
			cout << i + 1 << " element:" << arrint[i]<<endl;
		}
	}

	int maxValue() {
		int max = arrint[0];

		for (int i = 0; i < size; i++) {
			if (arrint[i] > max)
				max = arrint[i];
		}

		return max;
	}

	~arr() {
		delete[] arrint;
	}

};