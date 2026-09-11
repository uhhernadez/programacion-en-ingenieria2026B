#include <iostream>
using namespace std;

int main () {
    float a, b, c, d, e, f, g, h, i, j;  
    cout << "Numero 1: ";
    cin >> a;   
    cout << "Numero 2: ";
    cin >> b;
    cout << "Numero 3: ";
    cin >> c;
    cout << "Numero 4: ";
    cin >> d;
    cout << "Numero 5: ";
    cin >> e;
    cout << "Numero 6: ";
    cin >> f;
    cout << "Numero 7: ";
    cin >> g;
    cout << "Numero 8: ";
    cin >> h;
    cout << "Numero 9: ";
    cin >> i;
    cout << "Numero 10: ";
    cin >> j; 

    float suma = a + b + c + d + e + f + g + h +i +  j;
    float promedio = suma / 10.0;
    cout << "El promedio es: " << promedio << endl;
    cout << "La suma de los valores es: " << suma << endl;
}