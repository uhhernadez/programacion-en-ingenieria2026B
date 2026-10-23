#include <iostream>
using namespace std;
int main () {
    int n = 0;
    do {
        cout << "Siempre me ejecuto al manos una vez" << endl;
    } while (n != 0);

    while (n != 0 ) {
        cout << "No se ejecuta " << endl;
    }
}