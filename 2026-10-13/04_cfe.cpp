#include <iostream>
using namespace std;
int main () {
    float kWh, pago;
    cout << "Dame el consumo en kWh: ";
    cin >> kWh;

    if (kWh <= 100) {
        pago = kWh * 1.5;
    } else if (kWh <= 200) {
        pago = 100 * 1.5 + (kWh - 100) * 2.0;
    } else {
        pago = 100 * 1.5 + 100 * 2.0 + (kWh - 200) * 3.0;
    }

    cout << "El pago es: " << pago << endl;
}