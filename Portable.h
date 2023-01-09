#pragma once
#include "IElectronics.h"

class Portable: virtual public IElectronics {
    protected:
        double _weight;
    public:
		Portable() = default;
        Portable(double weight);
		double getWeight();
        void Show() override;
        virtual ~Portable();
};