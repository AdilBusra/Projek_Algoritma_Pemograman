#include <iostream>
using namespace std;

int main() {
    system ("cls");
    int jumlahOrang, jumlahMalam;
    int hargaKamar = 0, hargaTambahanKamar = 0, hargaExtraBed = 0;
    int totalHarga = 0;
    
    cout << "\nBerapa malam Anda menginap? ";
    cin >> jumlahMalam;
    cout << "Untuk berapa orang? ";
    cin >> jumlahOrang;

    switch (pilihanKamar) {
        case 1:
            hargaKamar = 500000;
            hargaTambahanKamar = 300000;
            hargaExtraBed = 200000;
            break;
        case 2:
            hargaKamar = 1000000;
            hargaTambahanKamar = 800000;
            hargaExtraBed = 500000;
            break;
        case 3:
            hargaKamar = 2500000;
            hargaTambahanKamar = 2000000;
            hargaExtraBed = 1500000;
            break;
        default:
            cout << "Pilihan tidak valid!\n";
            return 1;
    }

    int sisaOrang = jumlahOrang - 2;
    int tambahanKamar = 0, extraBed = 0;

    if (sisaOrang > 0) {
        tambahanKamar = sisaOrang / 2;
        extraBed = sisaOrang % 2;
    }

    totalHarga = (hargaKamar * jumlahMalam) +
                 (tambahanKamar * hargaTambahanKamar * jumlahMalam) +
                 (extraBed * hargaExtraBed * jumlahMalam);

    int token = tanggal * 100 + bulan * 10 + pilihanKamar * 100 + jumlahOrang;

    cout << "\n=== RINCIAN PEMESANAN ===\n";
    cout << "Tanggal Check-In  : " << tanggal << "-" << bulan << "-" << tahun << endl;
    cout << "Lama Menginap     : " << jumlahMalam << " malam\n";
    cout << "Jumlah Orang      : " << jumlahOrang << " orang\n";
    cout << "Kamar Utama       : 1 x Rp " << hargaKamar << "\n";
    cout << "Tambahan Kamar    : " << tambahanKamar << " x Rp " << hargaTambahanKamar << "\n";
    cout << "Extra Bed         : " << extraBed << " x Rp " << hargaExtraBed << "\n";
    cout << "----------------------------------------\n";
    cout << "TOTAL HARGA       : Rp " << totalHarga << "\n";
    cout << "TOKEN PEMBAYARAN  : #" << token << "\n";
    cout << "Silakan gunakan token ini untuk melakukan pembayaran.\n";

    return 0;
}