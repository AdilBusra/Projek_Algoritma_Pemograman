#include <iostream>
using namespace std;

int main() {
    int tanggal, bulan, tahun;

    cout << "Masukkan tanggal (1-31): ";
    cin >> tanggal;

    cout << "Masukkan bulan (1-12): ";
    cin >> bulan;

    cout << "Masukkan tahun: ";
    cin >> tahun;

    cout << "\nTanggal yang Anda masukkan: "
         << tanggal << "-" << bulan << "-" << tahun << endl;

    return 0;
}
