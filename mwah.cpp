#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int b = 10;

    cout << "Nilai awal a = " << a << endl;
    cout << "Nilai awal b = " << b << endl;

    cout << "\n=== Post-Decrement (a--) ===" << endl;
    cout << "Hasil a-- = " << a-- << endl;
    cout << "Nilai a setelah a-- = " << a << endl;
    
    cout << "\n=== Pre-Decrement (--b) ===" << endl;
    cout << "Hasil --b = " << --b << endl;
    cout << "Nilai b setelah --b = " << b << endl;
    return 0;
}