#include <iostream>
using namespace std;

int main() {
    int tanggal, bulan, tahun;
    int pilihanKamar;
    
    cout << "Masukkan tanggal (1-31): ";
    cin >> tanggal;

    cout << "Masukkan bulan (1-12): ";
    cin >> bulan;

    cout << "Masukkan tahun: ";
    cin >> tahun;

    cout << "\nPilih jenis kamar:\n";
    cout << "1. Kamar regular\n";
    cout << "2. Kamar premium\n";
    cout << "3. Kamar deluxe\n";
    cout << "Masukkan pilihan Anda (1-3): ";
    cin >> pilihanKamar;

    cout << "\nTanggal yang Anda masukkan: "
         << tanggal << "-" << bulan << "-" << tahun << endl;

    cout << "Jenis kamar yang dipilih: ";
    switch (pilihanKamar) {
        case 1:
            cout << "Kamar regular" << endl;
            break;
        case 2:
            cout << "Kamar premium" << endl;
            break;
        case 3:
            cout << "Kamar deluxe" << endl;
            break;
        default:
            cout << "Pilihan tidak valid!" << endl;
            break;
    }

    return 0;
}
