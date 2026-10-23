#include <iostream>
using namespace std;
int main () {
    int num;
    cout << "Ingrese un numero : ";
    cin >> num;
    int suma = 0;
    while (num > 0) {
        int div = num / 10;
        int resto = num % 10;
        cout << "num: " << num << " \tdiv: " << div << " \tresto: " << resto << endl; 
        num = div;
        suma += resto; 
    }
    cout << "La suma de los numeros es: " << suma << endl;
}