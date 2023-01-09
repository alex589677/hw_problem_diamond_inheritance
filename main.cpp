// author А.С. Гадиатулин, group CPLUS-1006, module-6, block-Base construct C++
#include <iostream>
#include "NoteBook.h"
#include "HouseHold.h"
#include "TV.h"
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    IElectronics* ptrIElectronics[2];
    ptrIElectronics[0] = new NoteBook(string("Lenovo"), 5.0, 1500);
    ptrIElectronics[1] = new TV(string("Rubin"), 54);
    bool open = true;
    cout << "Welcome to store electronics!" << endl;
    while (open) {
        cout << "Enter device: 1-notebook, 2-tv, 0-exit" << endl;
        int choice;
        cin >> choice;
        switch (choice) {
        case 1:
            ptrIElectronics[0]->Show();
            break;
        case 2:
            ptrIElectronics[1]->Show();
            break;
        case 0:
            open = false;
            break;
        default:
            cout << "Wrong enter. Try again." << endl;
            break;
        }
    }
    delete ptrIElectronics[0];
    delete ptrIElectronics[1];
    system("pause");
    return 0;
} 