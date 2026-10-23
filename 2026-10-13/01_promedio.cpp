#include <iostream>
using namespace std;
int main () {
    float c1, c2, c3;
    cout << "Calificacion 1: ";
    cin >> c1;
    cout << "Calificacion 2: ";
    cin >> c2;
    cout << "Calificacion 3: ";
    cin >> c3;

    float promedio = (c1 + c2 + c3 )/ 3.0;

    if (promedio >= 7.0) {
        cout << "Aprobado : " << promedio << endl;
    } else {
        cout << "Reprobado : " << promedio << endl;
    }

}