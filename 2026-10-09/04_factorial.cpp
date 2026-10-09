#include <iostream>
using namespace std;
int main () {
    int n;
    int factorial = 1;
    cout << "Ingrese un numero: ";
    cin >> n;
    for (int k = 1; k <= n; k++) {
        factorial = factorial * k;
    }
    cout << "El factorial es: " << factorial << endl;
}