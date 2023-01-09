#include "NoteBook.h"

NoteBook::NoteBook(string model, double weight, int sizeRam) : 
    HouseHold(model), Portable(weight), _sizeRam(sizeRam) {
}

NoteBook::NoteBook(const NoteBook& other) {
	_model = other._model;
	_weight = other._weight;
	_sizeRam = other._sizeRam;
}

int NoteBook::getSizeRam() {
	return _sizeRam;
}

ostream& NoteBook::operator<<(ostream& output) {
	output << this->getModel() << " "
		   << this->getWeight() << " "
		   << this->_sizeRam << '\n';
	return output;
}

void NoteBook::Show() {
    cout << "Size OZU: " << _sizeRam << '\n'
		 << "model: " << getModel() << '\n'
		 << "weigth: " << getWeight() << '\n';
}

NoteBook::~NoteBook() {
    cout << "delete NoteBook object" << endl;
}