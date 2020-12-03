#include "Name.h"

vector<Name> ob1 = {
	Name("����"),
	Name("����1"),
	Name("����"),
	Name("������"),
	Name("�����")
};

extern map<string, unsigned long int> arr;

Name::Name(string name)
{
	this->name = name;
}

string Name::getName() {
	return name;
}

Name Name::operator<(Name o1) {
	if (this->getName() < o1.getName())
		swap(*this, o1);
	return *this;
}

void show(map<string, unsigned long int> arr) {

	buildLine();
	if (arr.size())
		for (const auto& p : arr)
			cout << setw(10) << p.first << " : " << p.second << endl;
	else
		cout << "��� ��������� � map ��� ������������ ����" << endl;
	buildLine();

}

void findByKey(map<string, unsigned long int> arr, string key) {
	buildLine();
	if (arr.size()) {

		if (arr[key])
			cout << arr[key] << endl;
		else
			cout << "��� �������� � ������: " << key << endl;

	}
	else
		cout << "��� ��������� � map ��� ������������ ����" << endl;
	buildLine();
}

void findAllByLetter(map<string, unsigned long int> arr, char letter) {
	if (arr.size()) {
		map<string, unsigned long int> tempArr;
		for (const auto& p : arr) {
			bool check = false;
			string key = p.first;
			for (int i = 0; i < key.size(); i++)
			{
				if (key[i] == letter)
					check = true;
			}
			if (check)
				tempArr.emplace(p.first, p.second);
		}

		show(tempArr);

	}
	else
		cout << "��� ��������� map " << endl;
}

void deleteAllByLetter(char letter) {
	if (arr.size()) {
		vector<string> keyToDelete;
		for (const auto& p : arr) {
			bool check = false;
			string key = p.first;
			for (int i = 0; i < key.size(); i++)
			{
				if (key[i] == letter)
					check = true;
			}
			if (check)
				keyToDelete.push_back(key);
		}

		if (keyToDelete.size()) {
			for (auto& p : keyToDelete)
				arr.erase(p);
			buildLine();
			cout << "�������  ���������: " << keyToDelete.size() << endl;
			buildLine();

		}
		else {
			buildLine();
			cout << "��� ����������" << endl;
			buildLine();
		}
	}
	else
		cout << "��� ��������� map " << endl;
}


void buildLine() {
	cout << "-----------------------------------------" << endl;

}