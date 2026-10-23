#include <iostream>
using namespace std;
int main () {
    int num;
    int suma = 0;
    cout << "Ingrese un numero: ";
    cin >> num;
    
    while (num > 0) {
        int division = num /10;
        int resto = num % 10;
        suma += resto;
        cout << resto;
        num = division;   
    }
    cout << endl;
}