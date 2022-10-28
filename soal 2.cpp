#include <iostream>
using namespace std;
int main() {
    string username;
    string password;

    cout << "Masukkan username: ";
    cin >> username;
    cout << "Masukkan password: ";
    cin >> password;
    if (username == "ghina")
        if (password == "ghina2224")
            cout << "Username dan Password sesuai, Login berhasil" << endl;
        else
            cout << "Username sesuai, Password tidak sesuai" << endl;
    else
        if (password == "ghina224")
            cout << "Username tidak sesuai, Password sesuai" <<endl;
        else
            cout << "Maaf username dan password anda salah" << endl;

 return 0;
}
