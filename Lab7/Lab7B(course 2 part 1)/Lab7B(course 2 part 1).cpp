#include <iostream>
#include <fstream>
#include "Lab7B.h"
using namespace std;

int main()
{
	Create create_string("pPRrogrAamMmingG-2019");
	ofstream fout("Create_string.txt");

	fout << create_string;
	cout << create_string;


	return 0;
}
