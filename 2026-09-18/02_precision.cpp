#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    const double PI = 3.141592653589793238462;
    cout << setprecision(0) << PI << "\n";
    cout << setprecision(5) << PI << "\n";
    cout << setprecision(10) << PI << "\n";
    cout << setprecision(15) << PI << "\n";
    cout << setprecision(20) << PI << "\n";
}