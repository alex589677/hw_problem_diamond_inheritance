#pragma once
#include "IElectronics.h"

class HouseHold: virtual public IElectronics {
    protected:
		string _model;
    public:
        HouseHold() = default;
        HouseHold(string model);
        HouseHold(const HouseHold& other);
        string getModel();
        void Show() override;
        virtual ~HouseHold();
};