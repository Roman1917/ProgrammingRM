#include "Lab10.h"

	int main()
	{	
		while (true) {
			
			int mas1[] = { 2,3,1,4,5 };
			int mas2[] = { 5,4,3,2,1 };
			int sum_mas[] = { 2,3,-1,-4,5 };
			setlocale(LC_ALL, "ru");
			cout << "1-Тест функции min" << endl;
			cout << "2-Тест функции sort" << endl;
			cout << "3-Тест функции sum" << endl;
			cout << "4-Смоделированая ситуация под min" << endl;
			cout << "5-Смоделированая ситуация под sort" << endl;
			cout << "6-Смоделированая ситуация под sum" << endl;
			int n;
			cin >> n;
			switch (n) {
			case 1:
				assert(min(-6, -11) == -11);
				assert(min('a', 'c') == 'a');
				break;

			case 2:
				sort(mas1, 5);
				for (int i = 0; i < 5; i++) {
					assert(mas1[i] == mas2[i+1]);
					cout << "true" << endl;
				}
				break;
			
			case 3:
				
				assert(sum(sum_mas) == 10);
				break;

			case 4:
				assert(min1(-6, -11) == -11);
				assert(min1('a', 'c') == 'a');
				break;

			case 5:
				sort1(mas1, 5);
				for (int i = 0; i < 5; i++) {
					assert(mas1[i] == mas2[i]);
					cout << "true" << endl;
				}
				break;

			case 6:
				assert(sum1(sum_mas) == 10);
				break;


			}
			system("pause");
		}
		


	return 0;
}

