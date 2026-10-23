#include <iostream>
using namespace std;
int main () {
    int password = 1234;

    while (true) {
        int intento;
        cout << "Ingrese la contrasena : ";
        cin >> intento;
        if (intento == password) {
            cout << "Bienvenida!" << endl;
            break;
        } else {
            cout << "Incorrecta!"  << endl;
        }
    }

}

