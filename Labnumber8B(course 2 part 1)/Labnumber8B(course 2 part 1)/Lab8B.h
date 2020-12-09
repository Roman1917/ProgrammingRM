
#include <iostream>
template <typename T>
class Array {

	
public:
	T* array;
	int size;
	int ind;

	T max(T* begin, int n) {
		T max_result = *begin;
		for (int i = 0; i < n; i++)
			if (max_result < begin[i])
				max_result = begin[i];
		return max_result;
	}
	Array() : Array(0) { }

	Array(int n) {
		size = 100;
		ind = n;
		array = new T[size];
		for (int i = 0; i < size; i++)
			array[i] = 0;
	}

	void SetOneElement(T value, int index) {
	
		if (index >= 0 && index < ind) {
			array[index] = value;
		}
		else { throw - 1; }
	}

	T Subsum() {
		T result = 0;
		for (int i = 0; i < ind; i++)
			result += array[i];
		return result;
	}

	double Average() {
		return this->Subsum() / (double)this->ind;
	}

	void Show() {
		for (int i = 0; i < ind; i++)
			std::cout << array[i] << " ";
		std::cout << std::endl;
	}

	/*T operator[](int sub_size) {
		if (sub_size <= ind)
			return max(array, sub_size);
		return NULL;
	}*/

	~Array() { delete[] array; }

};

