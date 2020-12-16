
#include <iostream>
using namespace std;

template <typename T>
class Array {

	
public:
	T* array;
	int size;
	int ind;

	Array() : Array(0) { }

	Array(int n) {

		ind = n;
		size = 100;
		array = new T[size];
		for (int i = 0; i < size; i++)
			array[i] = 0;
	}

	void Show() {
		for (int i = 0; i < ind; i++) {
			cout << array[i] << " ";
		}
		cout << endl;
	}

	T SumMas() {
		T result = 0;
		for (int i = 0; i < ind; i++)
			result += array[i];
		return result;
	}

	double Average() {
		return this->SumMas() / (double)this->ind;
	}

	int Init_one(T arg, int index) {

		if (index < ind && index >= 0) {
			array[index] = arg;
		}
		else { return -1; }
	}


	~Array() { delete[] array; }

};

