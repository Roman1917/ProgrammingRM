#pragma once
#ifndef H1_H
#define H1_H
#include <set>
using namespace std;
class Pro {
public:
	Pro();
	Pro(int min_elem, int max_elem, int number);
	Pro(set<int> set_, int n);
	set<int> GetPro();

	int MaxElem();
	void Print();

private:
	set<int> numbers;
};
set<int> union_set(Pro a, Pro b);
set<int> intersection_set(Pro a, Pro b);
set<int> difference_set(Pro a, Pro b);
set<int> symmetric_difference_set(Pro a, Pro b);
#endif 
