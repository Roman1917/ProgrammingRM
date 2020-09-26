#include "Labnumber10D.h"

void Train::sortNum(Train* base) {
	for (int i = 0; i < N - 1; i++) {
		for (int j = 0; j < N - 1; j++) {
			if (base[j].num > base[j + 1].num) {
				swap(base[j], base[j + 1]);
			}
		}
	}
}

void Train::searchForNum(Train* base, int num) {
	cout << "Пункт назначения|Номер поезда|Время отправления" << endl;
	for (int i = 0; i < N; i++) {
		if (num == base[i].num) {
			cout << setw(11) << base[i].point << setw(11);
			cout << base[i].num << setw(11);
			cout << base[i].time << setw(11);
			cout << endl;

		}
	}
}

void Train::sortPoint(Train* base) {
	for (int i = 0; i < N - 1; i++) {
		for (int j = 0; j < N - 1; j++) {
			if (base[j].point > base[j + 1].point) {
				swap(base[j], base[j + 1]);
			}
			else /*if (base[j].point > base[j + 1].point)*/ {
				pointTime(base, j);
			}
		}
	}
}

void Train::pointTime(Train* base, int j) {
	if (base[j].time > base[j + 1].time) {
		swap(base[j], base[j + 1]);
	}
}

void Train::input(Train* base, int i) {
	cout << "Введите point - ";
	cin >> base[i].point;
	cout << "Введите num - ";
	cin >> base[i].num;
	cout << "Введите time - ";
	cin >> base[i].time;
}

void Train::menu() {
	cout << "1 - print info" << endl;
	cout << "2 - sort" << endl;
	cout << "3 - show" << endl;
}

void Train::show(Train* base) {
	cout << "Пункт назначения|Номер поезда|Время отправления" << endl;
	for (int i = 0; i < N; i++) {
		cout << setw(11) << base[i].point << setw(11);
		cout << base[i].num << setw(11);
		cout << base[i].time << setw(11);
		cout << endl;
	}
}