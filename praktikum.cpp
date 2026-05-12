#include <iostream>
#include <string>
using namespace std;

class Kendaraan {
private:
    int id;
    string nama;

public:
    // Constructor 
    Kendaraan() {
        id = 0;
        nama = "Belum terdaftar";
    }

    Kendaraan(int idKendaraan) {
        id = idKendaraan;
        nama = "Belum terdaftar";
    }

    Kendaraan(string namaKendaraan) {
        id = 0;
        nama = namaKendaraan;
    }

    Kendaraan(int idKendaraan, string namaKendaraan) {
        id = idKendaraan;
        nama = namaKendaraan;
    }

    // Metode untuk menampilkan informasi kendaraan
    void tampilkanInfo() {
        cout << "ID Kendaraan : " << id << endl;
        cout << "Nama Kendaraan: " << nama << endl;
        cout << "--------------------------" << endl;
    }
};

int main() {
    cout << "=== DATA KENDARAAN ===" << endl << endl;

    Kendaraan mobil1;
    cout << "Objek 1 (Tanpa Parameter):" << endl;
    mobil1.tampilkanInfo();

    Kendaraan mobil2(101);
    cout << "Objek 2 (Hanya ID):" << endl;
    mobil2.tampilkanInfo();

    Kendaraan motor1("Yamaha NMAX");
    cout << "Objek 3 (Hanya Nama):" << endl;
    motor1.tampilkanInfo();

    Kendaraan motor2(202, "Honda Vario");
    cout << "Objek 4 (Parameter Lengkap):" << endl;
    motor2.tampilkanInfo();

    return 0;
}