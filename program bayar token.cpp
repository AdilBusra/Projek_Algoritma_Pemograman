#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    string token = "";

    srand(time(0));
    cout << "12 angka acak: ";
    for (int i = 1; i <= 12; i++) {
        int angka = rand() % 10;
        cout << angka;
        token += to_string(angka);
    }

    cout << endl;
    cout << "Nilai token: " << token << endl;

    string token1;

    cout << "Masukkan token untuk pembayaran : ";
    cin >> token1;

    if (token1 == token){
        cout << "Token valid" << endl;
        cout << "Pembayaran berhasil, silahkan cek status untuk melihat reservasi" << endl;
    } else {
        cout << "Token tidak valid" << endl;
        cout << "Silahkan coba lagi" << endl;
        return 1;
    }

    return 0;
}
