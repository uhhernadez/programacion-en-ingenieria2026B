#include <iostream>
using namespace std;
int main () {
    int caso = 1;
    cout << "Dime el caso: ";
    cin >> caso;
    switch (caso) {
        case 0: cout << "caso 0\n";
        case 1: cout << "caso 1\n";
        case 2: cout << "caso 2\n";
        default: cout << "default\n";
    }
}