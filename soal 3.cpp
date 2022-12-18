#include <iostream>
using namespace std;
int main () {
    int tahun;

    cout << "## Program cek tahun kabisat ##" << endl;
    cout << "===============================" << endl;
    cout << endl;

    cout << "Masukkan tahun: ";
    cin >> tahun;
    if (tahun % 400 == 0){
        cout << "adalah tahun kabisat" << endl;
    } else if (tahun % 100 == 0) {
        cout << "bukan tahun kabisat" << endl;
    }  else if (tahun % 4 == 0) {
        cout << "adalah tahun kabisat" << endl;
    } else {
        cout << "bukan tahun kabisat" << endl;
    }
    return 0;
}
