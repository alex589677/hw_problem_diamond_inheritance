#pragma once
#include "Portable.h"
#include "HouseHold.h"

class NoteBook : public Portable, HouseHold {
    private:
        int _sizeRam;
    public:
        NoteBook(string model, double weight, int sizeRam);
		NoteBook(const NoteBook& other);
		int getSizeRam();
        ostream& operator<<(ostream& output);
        void Show();
        ~NoteBook();
};