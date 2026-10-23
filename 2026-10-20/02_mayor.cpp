#include <iostream>
using namespace std;
int main () {
    int mayor = 0;
    int num;

    while (true) {
        cout << "Ingrese un numero: ";
        cin >> num;

        if (num == 0) {
            break;
        }
        
        if (num > mayor) {
            mayor = num;
        }
    }
    cout << "El numero mayor es: " << mayor << endl;
}