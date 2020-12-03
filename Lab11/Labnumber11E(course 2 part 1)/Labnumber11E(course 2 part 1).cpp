
#include "Lab11E.h"

int main() {
	setlocale(LC_ALL, "rus");

	int c;
	Time T, T2,T3;

	while (true)
	{
		T.menu();
		cin >> c;

		if (c == 1) {
			T2.input();
			T2.adjust_time();
		
			T3.input();
			T3.adjust_time();
		}
		else if (c == 2) {
			T.show1(T2, T3);
		}
		else if (c == 3) {

			T._plusTime1(T2, T3);;
			cout << T << endl;
		}
		else if (c == 4) {
			T._minuseTime1(T2, T3);
			T.minus_time();
			cout << T << endl;
		}
		else if (c == 5) {
			T._compareTime1(T2,T3);
		}
		else if (c == 6) {
			T.Fun(T2);
		}
		else { 
			cout << "Попробуйте еще раз ";
			break;
		}
	}
}

