#pragma once
#include <iostream>
#include <string>
using namespace std;

class SOBAKA {
public:
	int weight, age;



	SOBAKA() {
		cout << "Конструктор класса собака" << endl;
		weight = 36; age = 3;
	}

	void Show_Sobaka() {

		cout << "Вес= " << weight << endl << "  Возраст=" << age << endl;
	}

	void golos() {
		if (weight >= 10) cout << "GAF" << endl;
		else cout << "gaf" << endl;
	}

	~SOBAKA() { cout << "Деструктора класса Собака" << endl; };
};

class SPANIEL : public SOBAKA {

public:

	string color;
	SPANIEL() {
		cout << "Конструктор класса спаниель" << endl;
		color = "Коричневый";
	}

	void Show_Spaniel() {
		cout << "Цвет= " << color << endl;
	}
	~SPANIEL() { cout << "Деструктора класса Спаниель" << endl; };

};
