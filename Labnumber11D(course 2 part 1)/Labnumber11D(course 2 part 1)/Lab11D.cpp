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
