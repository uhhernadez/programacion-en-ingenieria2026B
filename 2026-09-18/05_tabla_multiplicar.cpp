#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    float num = 7;
    cout << num << "\tx" << "\t1" << "\t=" << setw(8) << num * 1 << endl;
    cout << num << "\tx" << "\t2" << "\t=" << setw(8) << num * 2 << endl;
    cout << num << "\tx" << "\t3" << "\t=" << setw(8) << num * 3 << endl;
    cout << num << "\tx" << "\t4" << "\t=" << setw(8) << num * 4 << endl;
    cout << num << "\tx" << "\t5" << "\t=" << setw(8) << num * 5 << endl;
    cout << num << "\tx" << "\t6" << "\t=" << setw(8) << num * 6 << endl;
    cout << num << "\tx" << "\t7" << "\t=" << setw(8) << num * 7 << endl;
    cout << num << "\tx" << "\t8" << "\t=" << setw(8) << num * 8 << endl;
    cout << num << "\tx" << "\t9" << "\t=" << setw(8) << num * 9 << endl;
    cout << num << "\tx" << "\t10" << "\t=" << setw(8) << num * 10 << endl;

}