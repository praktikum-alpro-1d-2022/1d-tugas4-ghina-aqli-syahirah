#include <iostream>
using namespace std;
int main() {
    int a;
        cout << " Masukkan bilangan: ";
        cin >> a;
        a=a%2;
        if (a == 0)
            cout << " Bilangan genap " << endl;
        else
            cout << " Bilangan ganjil " << endl;
    return 0;
}
