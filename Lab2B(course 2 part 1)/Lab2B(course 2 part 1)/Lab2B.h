#ifndef TRANSPORT_H
#define TRANSPORT_H
#include<string>
using namespace std;
class Firms {
public:
	Firms(string kolvprod, double sales, float rinok);

	friend bool operator==(const Firms&, const Firms&);
	friend const Firms operator+(const Firms&, const Firms&);

	int operator[] (const char* c);

	void operator() ();

	string get_info();

private:
	string kolvprod;
	double sales;
	float rinok;
};

#endif // TRANSPORT_H
