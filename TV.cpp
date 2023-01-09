#include "TV.h"

TV::TV(string model, double inches) : HouseHold(model), _inches(inches) {
}

double TV::getInches() {
	return _inches;
}

void TV::Show() {
	cout << "model: " << getModel() << '\n'
		<< "inches: " << getInches() << endl;
}

TV::~TV() {
	cout << "delete object TV" << endl;
}