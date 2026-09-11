#include <iostream>

int main () {
    int edad, anio_actual, anio_nacimiento;
    std::cout << "Ingrese el año actual: ";
    std::cin >> anio_actual;
    std::cout << "Ingrese el año de naciemiento: ";
    std::cin >> anio_nacimiento;
    edad = anio_actual - anio_nacimiento;
    std::cout << "Su edad es: " << edad << std::endl;
}