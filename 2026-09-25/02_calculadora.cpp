#include <iostream>
using namespace std;

int main () {
    char operacion;
    float numa, numb;
    cout << "Ingrese primer numero: ";
    cin >> numa;
    cout << "Ingrese segundo numero: ";
    cin >> numb;
    cout << "Ingrese operacion (+,-,*,/) :";
    cin >> operacion;
    if (operacion == '+') {
        cout << "Resultado: " << (numa + numb) << endl;
    } else if (operacion == '-') {
        cout << "Resultado: " << (numa - numb) << endl;
    } else if (operacion == '*') {
        cout << "Resultado: " << (numa * numb) << endl;
    } else if (operacion == '/') {
        cout << "Rasultado: " << (numa / numb) << endl;
    } else {
        cout << "La operacion '" << operacion << "' es invalida" << endl; 
    }
}