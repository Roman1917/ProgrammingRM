#ifndef H1_H
#define H1_H
#include <set>
using namespace std;
class Sets {
public:
	Sets();
	Sets(int min_elem, int max_elem, int number);
	Sets(set<int> set_, int n);
	set<int> GetSet();
	int MaxElem();
	void Print();

private:
	set<int> numbers;
};
set<int> union_set(Sets a, Sets b);
set<int> intersection_set(Sets a, Sets b);
set<int> difference_set(Sets a, Sets b);
set<int> symmetric_difference_set(Sets a, Sets b);
#endif // H1_H

