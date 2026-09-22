#include <iostream>
using namespace std;

int main () {
    int respuesta;
    cout << "Tienes un problema? \n";
    cout << "1 : si \n";
    cout << "0 : no \n";
    cin >> respuesta;
    if (respuesta == 1) {
        cout << "Tiene solucion? \n";
        cout << "1 : si \n";
        cout << "0 : no \n";
        cin >> respuesta;
        if (respuesta == 1) {
            cout << "Solucionando...\n";
        } else {
            cout << "No te preocupes\n";
        }
    } else {
        cout << "No te preocupes\n";
    }
}