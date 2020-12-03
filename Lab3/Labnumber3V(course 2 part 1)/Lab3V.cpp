#include "Lab3V.h"

Pro::Pro(int n) {
	x = n;
}
Pro::~Pro() { }
int Pro::get() const {
	return x;
}
Pro7::Pro7(int a) : Pro(a) {
	div1 = a % 7;
}
int Pro7::get() const {
	return div1 == 3 ? x : 0;
}
Pro5::Pro5(int a) : Pro7(a) {
	div2 = a % 5;
}
int Pro5::get() const {
	return (div1 == 3 && div2 == 2) ? x : 0;
}
