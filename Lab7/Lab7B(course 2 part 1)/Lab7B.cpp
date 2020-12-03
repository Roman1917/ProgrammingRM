#include "Lab7B.h"

Create::Create() {
	this->text = "";
}

ostream& operator<<(ostream &show, Create &create_string) {
	show << create_string._show();
	return show;
}

Create::Create(string text) {
	this->text = text;
}

string Create::_show() {
	string result = "";
	for (int i = 0; i < (int)this->text.length(); i++)
		if ((int)text[i] < 48 || (int)text[i] > 57)
			if ((int)text[i] < 65 || (int)text[i] > 90)
				result += this->text[i];
	return result;
}



