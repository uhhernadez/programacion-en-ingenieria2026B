#include <iostream>
using namespace std;

int main () {
    int total, resto;
    int dias, horas, minutos, segundos;
    cout << "Dame el numero de segundos: ";
    cin >> total;
    // 1 minuto = 60 segundos
    // 1 hora = 60 * 60  = 3600 segundos
    // 1 dia = 24 * 3600 = 86400
    int segundosDia = 60 * 60 * 24;
    int segundosHora = 60 * 60;
    int segundosMin = 60;
    dias = total / segundosDia;
    resto = total % segundosDia;

    horas = resto / segundosHora;
    resto = resto % segundosHora;

    minutos = resto / segundosMin;
    segundos = resto % segundosMin;
    cout << dias << " dias " << horas << " horas " << minutos << " minutos "
        << segundos << " segundos " << endl;

}