#include "Portable.h"

Portable::Portable(double weight) : _weight(weight) {
}

double Portable::getWeight() {
	return _weight;
}

void Portable::Show() {
    cout << "Portable device" << endl;
}

Portable::~Portable() {
    cout << "delete object Portable" << endl;
}