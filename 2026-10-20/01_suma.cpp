#include <iostream>
using namespace std;
int main () {
    int suma = 0;
    while (true) {
        int num ;
        cout << "Ingrese un numero (0 para salir):";
        cin >> num;
        suma += num;
        if ( num == 0) {
            break;
        }
    }
    cout << "La suma total es: " << suma << endl; 

}