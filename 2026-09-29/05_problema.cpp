#include <iostream>
using namespace std;
int main () {
    float x ;
    cout << "Ingrese el numero : ";
    cin >> x;
    if ( x >= 10 && x <= 50) {
        cout << "El numero esta dentro del rango" << endl;
    } else {
        cout << "El numero esta fuera del rango" << endl;
    }

}