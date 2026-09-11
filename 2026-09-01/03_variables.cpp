#include <iostream>

int main () {
    char a;
    int b;
    float c;
    double d;

    std::cout << "Teclea un caracter y luego presiona enter" << std::endl;
    std::cin >> a; 
    std::cout << "Teclea un entero y luego presiona enter" << std::endl;
    std::cin >> b;
    std::cout << "Teclea un flotante y luego presiona enter" << std::endl;
    std::cin >> c;
    std::cout << "Teclea un double y luego presiona enter" << std::endl;
    std::cin >> d;
    std::cout << "Valores: " << a << " " << b << " "  << c << " " << d ;
}