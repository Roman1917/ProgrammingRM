#pragma once

#include <iostream>
#include <cstring>
#include <cassert>

using namespace std;

template <typename T>
T min(T a, T b)
{
	T result;
	if (a > b)  result = b;
	else  result = a;
	cout << result << endl;
	return result;
}
template <typename P>

P min1(P a, P b)
{
	P result;
	if (a < b)  result = b;
	else  result = a;
	cout << result << endl;
	return result;
}


template <typename R>
R sort(R mas1[], R N) {

	for (R i = 0; i < N; i++)
		for (R j = 0; j < N; j++) {
			if (mas1[i] > mas1[j])
				swap(mas1[i], mas1[j]);
		}
	return 0;
}
template <typename C>
C sort1(C mas1[], C N) {

	for (C i = 0; i < N; i++)
		for (C j = 0; j < N; j++) {
			if (mas1[i] < mas1[j])
				swap(mas1[i], mas1[j]);
		}
	return 0;
}

template <typename E>
E sum(E sum_mas[]) {
	E count = 0;
	for (E i = 0; i < 5; i++) {
		if (sum_mas[i] > 0) count += sum_mas[i];
	}
	cout << count << endl;
	return count;
}
template <typename W>
W sum1(W sum_mas[]) {
	W count = 0;
	for (W i = 0; i < 5; i++) {
		if (sum_mas[i] > 0) count += sum_mas[i];
	}
	cout << count << endl;
	return count;
}
