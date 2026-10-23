#include <iostream>
using namespace std;
int main () {
    int mayor, num;

    cout << "Ingrese un numero : ";
    cin >> num;
    mayor = num;
    while (num != 0) {
        cout << "Ingrese un numero : ";
        cin >> num;
        if (num == 0) {
            break;
        } 
        if (num > mayor) {
            mayor = num;
        }
    }   
    cout << "El numero mayor es: " << mayor; 
}
