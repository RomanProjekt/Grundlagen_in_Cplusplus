#include <iostream>
using namespace std;

class Kreis {

public:
	int radius;
	const double PI = 3.14;

	int flaeche() {
		return this->radius * this->radius * this->PI;
	}

};