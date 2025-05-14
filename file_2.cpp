#include <iostream>
#include <vector>
using namespace std;

int main() {
    int jumlahPilihan;
    vector<int> pilihanKamar;

    int hargaKamar[] = {200000, 300000, 500000}; 
    cout << "Pilih hingga 3 jenis kamar:\n";
    cout << "1. Kamar regular  - Rp200.000\n";
    cout << "2. Kamar standar  - Rp300.000\n";
    cout << "3. Kamar deluxe   - Rp500.000\n";

    cout << "Berapa banyak jenis kamar yang ingin Anda pilih (1-3)? ";
    cin >> jumlahPilihan;

    if (jumlahPilihan < 1 || jumlahPilihan > 3) {
        cout << "Jumlah pilihan tidak valid.\n";
        return 1;
    }

    cout << "Masukkan pilihan kamar (contoh: 1 3): ";
    for (int i = 0; i < jumlahPilihan; i++) {
        int pilihan;
        cin >> pilihan;
        if (pilihan >= 1 && pilihan <= 3) {
            pilihanKamar.push_back(pilihan);
        } else {
            cout << "Pilihan " << pilihan << " tidak valid.\n";
            return 1;
        }
    }

    int totalHarga = 0;
    cout << "\nJenis kamar yang dipilih:\n";
    for (int i = 0; i < pilihanKamar.size(); i++) {
        int idx = pilihanKamar[i];
        switch (idx) {
            case 1:
                cout << "- Kamar regular: Rp" << hargaKamar[0] << endl;
                totalHarga += hargaKamar[0];
                break;
            case 2:
                cout << "- Kamar standar: Rp" << hargaKamar[1] << endl;
                totalHarga += hargaKamar[1];
                break;
            case 3:
                cout << "- Kamar deluxe: Rp" << hargaKamar[2] << endl;
                totalHarga += hargaKamar[2];
                break;
        }
    }

    cout << "\nTotal harga sementara: Rp" << totalHarga << endl;

    return 0;
}
