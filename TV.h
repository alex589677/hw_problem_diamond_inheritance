#pragma once
#include "HouseHold.h"

class TV : public HouseHold {
private:
	double _inches;
public:
	TV(string model, double inches);
	double getInches();
	void Show();
	~TV();
};