#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <Windows.h>
#include <iomanip>

using namespace std;
class Name
{
public:
	Name(string name);
	string getName();
	Name operator<(Name o1);
private:
	string name;
};

void show(map<string, unsigned long int> arr);
void findByKey(map<string, unsigned long int> arr, string key);
void findAllByLetter(map<string, unsigned long int> arr, char letter);
void deleteAllByLetter(char letter);
void buildLine();