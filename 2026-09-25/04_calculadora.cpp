#include <iostream>
using namespace std;
int main () {
    char operacion;
    float a, b;
    cout << "Ingrese primer numero: ";
    cin >> a;
    cout << "Ingrese segundo numero: ";
    cin >> b;
    cout << "Ingrese operacion (+,-,*,/): ";
    cin >> operacion;
    
    switch (operacion) {
        case '+': cout << "La suma es:" << (a+b) << endl; break;
        case '-': cout << "La resta es:"<< (a-b) << endl;break;
        case '*': cout << "La multiplicacion es:" << (a*b) << endl;break;
        case '/': cout << "La division es:" << (a/b) << endl; break;
        default: cout << "Operacion no valida" << endl; break;
    }

}