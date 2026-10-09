#include <iostream>
using namespace std;
int main () {
    int x = 0;

    cout << "Tabla de multiplicar : ";
    cin >> x;
    for (int j = 1;  j <=10; j++) {
        cout << x << " x " <<  j << " = " << (j*x) << endl; 
    }
}