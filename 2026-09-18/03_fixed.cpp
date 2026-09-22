#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    float cambio = 5.70; // cinco pesos con setenta centavos
    cout << fixed;
    cout << "El cambio es " << setprecision(0) << cambio << endl;
    cout << "El cambio es " << setprecision(2) << cambio << endl;
    cout << "El cambio es " << setprecision(3) << cambio << endl;

}