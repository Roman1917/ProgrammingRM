#pragma once

#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

class Matrix {
public:
	Matrix();

	Matrix(int n, int m);

	void showArr();
	void randArr();
	void findElement(int x, int y);
	void findMin();
	void getNewArr(int i, int j, int ix, int ij);

	~Matrix();

private:
	int** arr, n, m;


};