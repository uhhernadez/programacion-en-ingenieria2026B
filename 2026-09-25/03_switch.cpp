#include <iostream>
using namespace std;
int main () {
    int caso = 1;
    cout << "Dime el caso: ";
    cin >> caso;
    switch (caso) {
        case 0: cout << "caso 0\n"; break;
        case 1: cout << "caso 1\n";break;
        case 2: cout << "caso 2\n";break;
        default: cout << "default\n";break;
    }
}