#include <iostream>
using namespace std;
int main () {
    int N, suma = 0;
    cout << "Ingrese N: ";
    cin >> N;

    for (int i = 1; i <= N; i++) {
        suma = suma + i;
        //cout << aux << endl;
    }
    // N = 5;
    // ‼️ suma = 1 + 2 + 3 + 4 + 5;
    // suma = 0;
    // suma = suma + 1; // 1
    // suma = suma + 2; // 3
    // suma = suma + 3; // 6
    // suma = suma + 4; // 10
    // suma = suma + 5; // 15

    cout << "La suma es: " << suma << endl;
}