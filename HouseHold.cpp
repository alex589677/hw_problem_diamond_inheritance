#include "HouseHold.h"

HouseHold::HouseHold(string model) {
	_model = model;
}

HouseHold::HouseHold(const HouseHold& other) {
	_model = other._model;
}

string HouseHold::getModel() {
	return _model;
}

void HouseHold::Show() {
    cout << "color: " << getModel() << endl;
}

HouseHold::~HouseHold() {
    cout << "delete HouseHold object" << endl;
}