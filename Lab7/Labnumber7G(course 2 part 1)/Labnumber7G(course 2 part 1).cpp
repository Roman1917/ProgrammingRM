#include <iostream>
#include "Lab7G.h"

using namespace std;

int main()
{
	ofstream oof;
	oof.open("file.txt");
	oof.close();
	TeamData t;
	string input;
	TeamDataArr arr;
	while (true)
	{

		cout << "Enter 1 - to fill team data" << endl
			<< "Enter 2 - to print team data array" << endl
			<< "Enter 3 - to save one team data in file" << endl
			<< "Enter 4 - to import data of one team from file " << endl
			<< "Enter 5 - to save all data in file" << endl
			<< "Enter 6 - to import all data from file" << endl;

		cin >> input;
		if (input[0] == '1') {
			cin >> t;
			arr.Add(&t);
		}
		if (input[0] == '2') {
			cout << arr.GetView();
		}
		if (input[0] == '3') {
			cout << "Enter id which team to save " << endl;
			int id;
			cin >> id;
			try {
				arr.Write("file.txt", id);
			}
			catch (const exception e) {
				cerr << e.what() << " Invalid id or filename" << endl;
			}
		}
		if (input[0] == '4') {
			cout << "Enter id which team to save " << endl;
			int id;
			cin >> id;
			try {
				t = arr.Read("file.txt", id);
				cout << t << endl;
			}
			catch (const exception e) {
				cerr << e.what() << " Invalid id or file not found" << endl;
			}
		}
		if (input[0] == '5') {
			arr.Import("file.txt");
		}
		if (input[0] == '6') {
			arr.Export("file.txt");
		}
	}
	return 0;
}