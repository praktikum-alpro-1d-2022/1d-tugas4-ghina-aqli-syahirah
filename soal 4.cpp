#include <iostream>
using namespace std;
int main() {
    int kode;
    cout << "          Menu Restauran Mc'Yahud     " << endl;
    cout << "   =======================================" << endl;
    cout << "   1. Nasi goreng informatik   Rp. 5.000,-" << endl;
    cout << "   2. Nasi soto ayam internet  Rp. 7.000,-" << endl;
    cout << "   3. Gado-gado disket         Rp. 4.500,-" << endl;
    cout << "   4. Bubur ayam LAN           Rp. 4.000,-" << endl;
    cout << "   =======================================" << endl;
    cout << endl;
    cout << "Masukkan pilihan anda: ";
    cin >> kode;
    if (kode == 1)
        cout << "Nasi goreng informatik Rp. 5000,-" << endl;
    else if (kode == 2)
        cout << "Nasi soto ayam internet Rp. 7000,-" << endl;
    else if (kode == 3)
        cout << "Gado-gado disket Rp. 4.500,-" << endl;
    else if (kode == 4)
        cout << "Bubur ayam LAN Rp. 4.000,-" << endl;
    else
        cout << "Menu yang anda masukkan salah" << endl;
  return 0;
}
