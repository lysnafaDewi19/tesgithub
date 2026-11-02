#include <iostream>
using namespace std;

int main() {
    string istri;
    string suami = "defa";

    cout << "Selamat Datang di verifikasi pasutri\n";

    cout << "masukan nama istri anda: ";
    cin >> istri;

    cout << "istri anda adalah: " << istri << "\nsuami anda adalah: " << suami << endl;

    if (istri == "nafa" && suami == suami) {
        cout << "kalian suami istri" << endl;
    } else cout << "kalian bukan suami istri" << endl;

}