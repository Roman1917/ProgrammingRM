#pragma once
#include <iostream>
#include <string>
using namespace std;

class SOBAKA {
public:
	int weight, age;



	SOBAKA() {
		cout << "����������� ������ ������" << endl;
		weight = 36; age = 3;
	}

	void Show_Sobaka() {

		cout << "���= " << weight << endl << "  �������=" << age << endl;
	}

	void golos() {
		if (weight >= 10) cout << "GAF" << endl;
		else cout << "gaf" << endl;
	}

	~SOBAKA() { cout << "����������� ������ ������" << endl; };
};

class SPANIEL : public SOBAKA {

public:

	string color;
	SPANIEL() {
		cout << "����������� ������ ��������" << endl;
		color = "����������";
	}

	void Show_Spaniel() {
		cout << "����= " << color << endl;
	}
	~SPANIEL() { cout << "����������� ������ ��������" << endl; };

};
