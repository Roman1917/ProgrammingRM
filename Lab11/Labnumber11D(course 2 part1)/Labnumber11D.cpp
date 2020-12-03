#include"Labnumber11D.h"
#include<iostream>
#include<vector>
#include <algorithm>
Pro::Pro() {
	while (numbers.size() <= 10)
		numbers.insert(rand() % 41 - 20);
}

Pro::Pro(int min_elem, int max_elem, int number) {
	while (numbers.size() <= number)
		numbers.insert(min_elem + (rand() % (max_elem - min_elem + 1)));
}

Pro::Pro(set<int> set_, int n) {
	numbers.clear();
	set<int> ::iterator it = set_.begin();
	for (int i = 0; i < n; i++) {
		numbers.insert(*(it));
		it++;
	}
}

set<int> Pro::GetPro() {
	return numbers;
}

int Pro::MaxElem() {
	set<int> ::iterator it = numbers.end();
	it--;
	return *(it);
}


void Pro::Print() {
	for (set<int> ::iterator i = numbers.begin(); i != numbers.end(); i++)
		cout << *i << ' ';
	cout << endl;
}
set<int> union_set(Pro a, Pro b) {
	set<int> a1 = a.GetPro(), b1 = b.GetPro();
	vector<int> res;
	set<int> result;
	set_union(a1.begin(), a1.end(),
		b1.begin(), b1.end(),
		back_inserter(res));
	result.insert(res.begin(), res.end());
	return result;
}

set<int> intersection_set(Pro a, Pro b) {
	set<int> a1 = a.GetPro(), b1 = b.GetPro();
	vector<int> res;
	set<int> result;
	set_intersection(a1.begin(), a1.end(),
		b1.begin(), b1.end(),
		back_inserter(res));
	result.insert(res.begin(), res.end());
	return result;
}

set<int> difference_set(Pro a, Pro b) {
	set<int> a1 = a.GetPro(), b1 = b.GetPro();
	vector<int> res;
	set<int> result;
	set_difference(a1.begin(), a1.end(),
		b1.begin(), b1.end(),
		back_inserter(res));
	result.insert(res.begin(), res.end());
	return result;
}

set<int> symmetric_difference_set(Pro a, Pro b) {
	set<int> a1 = a.GetPro(), b1 = b.GetPro();
	vector<int> res;
	set<int> result;
	set_symmetric_difference(a1.begin(), a1.end(),
		b1.begin(), b1.end(),
		back_inserter(res));
	result.insert(res.begin(), res.end());
	return result;
}
