#include <iostream>

int main () {
    // int a, b, suma; // float a, b, suma;
    int a;
    int b;
    int suma;
    std::cout << "Ingrese el primer numero: ";
    std::cin >> a;
    std::cout << "Ingrese el segundo numero: ";
    std::cin >> b;
    suma = a + b;
    std::cout << "La suma es: " << suma << std::endl;
}