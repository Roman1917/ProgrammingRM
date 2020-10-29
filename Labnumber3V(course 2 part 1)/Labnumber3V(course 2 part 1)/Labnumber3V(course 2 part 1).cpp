#include "Lab3V.h"

#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;
#define N 100

int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "rus");
	Pro *number[N];

	for (int i = 0; i < N; i++) {
		number[i] = new Pro5 (rand()%100);
	}

	for (int i = 0; i < N; i++) {
		if (number[i]->get())
			cout << "Число номер: " << i << " Число: " << number[i]->get() << endl;
	}
	system("pause");
	return 0;
}


//#include <iostream>
//#include <iomanip>
//using namespace std;
//
//class A {
//	
//public:
//	int x[10];
//	void init() {
//		for (int i = 0; i < 10; i++)
//		{
//
//			x[i] = rand() % 20;
//		
//		}
//		
//	}
//
//	void show() {
//		for (int i = 0; i < 10; i++)
//		{
//			cout << x[i] << setw(3)<<endl;
//		}
//	}
//};
//
//class B : public A {
//	int b;
//public:
//	void div7() {
//		for (int i = 0; i < 10; i++)
//		{
//			if (x[i] % 7 == 3) {
//					b=3;
//			}
//		}
// }
//
//};
//
//class C : public B {
//	int c, k;
//public:
//	void div5() {
//		for (int i = 0; i < 10; i++)
//		{
//			if (x[i] % 5 == 2) {
//				c = 2;
//				k = x[i];
//			}
//		}
//	}
//
//	void shownum() {
//
//		
//		for (int i = 0; i < 10; i++) {
//			if (x[i] % 7 == 3 || x[i] % 5 == 2) {
//				cout << x[i] << endl;
//			}
//		}
//	}
//
//};
//
//int main()
//{
//	setlocale(LC_ALL, "rus");
//	srand(time(NULL));
//	C temp;
//	temp.init();
//	temp.show();
//	cout << "Числа при делении с остатком 3 и 2:" << endl;
//	temp.shownum();
//
//	
//}
