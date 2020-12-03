#include "Labnumber10D.h"


int main() {

	setlocale(LC_ALL, "rus");

	Train base[N];

	for (int i = 0; i < N; i++) {
		base->input(base, i);
	}

	base->sortNum(base);

	int c;
	int x;

	while (true)
	{
		base->menu();
		cin >> c;

		if (c == 1) {
			cin >> x;
			base->searchForNum(base, x);
		}
		else if (c == 2) {
			base->sortPoint(base);
		}
		else if (c == 3) {
			base->show(base);
		}
	}
}