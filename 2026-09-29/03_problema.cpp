#include <iostream>
using namespace std;
int main () {
    float calificacion;
    cout << "Ingrese su calificacion: ";
    cin >> calificacion;
    if (calificacion >= 90) {
        cout << "Tu calificacion es : A" << endl;
    } else if (calificacion >= 80) {
        cout << "Tu calificacion es: B" << endl;
    } else if (calificacion >= 70) {
        cout << "Tu calificacion es: C" << endl;
    } else if (calificacion >= 60) {
        cout << "Tu calificacion es: D" << endl;
    } else {
        cout << "Tu calificacion es: F" << endl;
    }
}