
#include"Labnum11D.h"


int *Union(int arr1[], int arr2[], int size1, int size2) {
	static int *arr = new int[size1 + size2];
	for (int i = 0; i < size1; i++) {
		arr[i] = arr1[i];
	}

	for (int i = 0; i < size2; i++) {
		arr[size1 + i] = arr2[i];
	}

	return arr;
}

int* Intersection(int arr1[], int arr2[], int size1, int size2) {
	int n;
	int k = 0;
	if (size1 <= size2)
		n = size1;
	else
		n = size2;


	static int *arr = new int[n];

	for (int i = 0; i < size1; i++) {
		for (int j = 0; j < size2; j++) {
			if (arr1[i] == arr2[j]) {
				arr[k] = arr[i];
				k++;
			}
		}
	}

	return arr;
}


int* Difference(int arr1[], int arr2[], int size1, int size2) {
	int n;
	int k = 0;
	if (size1 <= size2)
		n = size1;
	else
		n = size2;


	static int* arr = new int[n];

	for (int i = 0; i < size1; i++) {
		for (int j = 0; j < size2; j++) {
			if (arr1[i] != arr2[j]) {
				arr[k] = arr[i];
				k++;
			}
		}
	}

	return arr;
}

int* Disjunc(int arr1[], int arr2[], int size1, int size2) {
	int k = 0;

	bool New = false;

	int* test_arr = new int[size1 + size2];
	int* arr;

	for (int i = 0; i < size1; i++) {
		for (int j = 0; j < k; j++) {
			if (arr1[i] != test_arr[j]) {
				New = true;
				k++;
			}
		}

		if (New) {
			New = false;
			test_arr[k] = arr1[i];

		}
	}

	for (int i = 0; i < size2; i++) {
		for (int j = 0; j < k; j++) {
			if (arr2[i] != test_arr[j]) {
				New = true;
				k++;
			}
		}

		if (New) {
			New = false;
			test_arr[k] = arr2[i];
		}
	}

	arr = new int[k + 1];

	for (int i = 0; i < k + 1; i++) {
		arr[i] = test_arr[k];
	}

	return arr;
}