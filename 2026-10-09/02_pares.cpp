#include <iostream>
using namespace std;
int main () {
    for (int i = 1; i < 51; i++) {
        if (i % 2 == 0) {
            cout << i << ' ';
        }
    }
    cout << endl;

    for (int j = 2; j < 51; j+=2) {
        cout << j << ' ';
    }
    cout << endl;
}
