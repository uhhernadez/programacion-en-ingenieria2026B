#include <iostream>
using namespace std;
int main () {
    int N;
    cout << "Ingrese N: ";
    cin >> N;
    for (int i = N; i > 0; i--) {
        cout << i << ' ';
    }
    cout << "Despegue !" << endl;
}