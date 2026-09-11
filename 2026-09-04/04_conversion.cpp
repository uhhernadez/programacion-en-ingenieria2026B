#include <iostream>
int main () {
    float F, C;
    std::cout << "Ingrese la temperatura en Celcius: ";
    std::cin >> C;
    F = C * (9.0 / 5.0) + 32;
    std::cout << "La temperatura en Farenheit: " << F << std::endl;
}