#include <iostream>
using namespace std;
int main () {
    int a, b, c;
    cout << "Dame el valor de 'a' : ";
    cin >> a;
    cout << "Dame el valor de 'b' : ";
    cin >> b;
    cout << "Dame el valor de 'c' : ";
    cin >> c;

    if ( a > b && a > c) {
        cout << "El mayor valor es 'a' " << a << endl;
    }
    if ( b > a && b > c) {
        cout << "El mayor valor es 'b' " << b << endl;
    }
    if ( c > a && c > b) {
        cout << "El mayor valor es 'c' " << c << endl;
    }
    
}






