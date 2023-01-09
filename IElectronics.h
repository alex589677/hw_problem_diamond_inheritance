#pragma once
#include <iostream>
using namespace std;

class IElectronics {
    public:
        IElectronics() = default;
        virtual void Show() = 0;
        virtual ~IElectronics() { cout << "delete IElectronics" << endl; };
};