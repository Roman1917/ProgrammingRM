#include "Lab10E.h"

Matrix::Matrix() {
	n = m = 4;
	arr = new int*[n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = new int[m];

	}
}

Matrix::Matrix(int n, int m) {
	this->n = n;
	this->m = m;

	arr = new int*[n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = new int[m];

	}
}

void Matrix::randArr() {
	for (int i = 0; i < n; i++)
	{
		arr[i] = new int[m];
		for (int j = 0; j < m; j++)
		{
			arr[i][j] = rand() % 10;
		}
	}
}

void Matrix::showArr() {
	for (int i = 0; i < n; i++)
	{

		for (int j = 0; j < m; j++)
		{
			cout << setw(4) << arr[i][j];
		}

		cout << endl;
	}
}

void Matrix::findElement(int x, int y) {
	int t;
	cout << "Значение элемента с координатами" << x << " " << y << " = " << arr[x][y] << endl;

	cout << "Поменять значение на:";
	cin >> t;

	arr[x][y] = t;
}

void Matrix::findMin() {
	int min = 10;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (arr[i][j] < min) min = arr[i][j];
		}

	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (arr[i][j] == min) {
				cout << "Элемент с координатами  " << i << " " << j << " имеет значение: " << min << endl;

			}
		}

	}

}

void Matrix::getNewArr(int si, int sj, int ix, int ij) {
	for (int i = si; i < si + ix; i++)
	{
		for (int j = sj; j < sj + ij; j++)
		{
			cout << setw(4) << arr[i][j];
		}
		cout << endl;

	}
}

Matrix::~Matrix() {
	for (int i = n - 1; i < n; i++)
	{
		delete[] arr[i];

	}

	delete[] arr;

}