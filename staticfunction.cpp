#include <iostream>
#include <string> // Tambahkan library string
using namespace std;

class Mahasiswa {
private:
    static int nim; // Deklarasi
public:
    int id;
    string nama;

    void setID();
    void printAll();

    static void setNim(int pnim) {
        nim = pnim;
    }

    // PERBAIKAN: Ubah void ke int, hapus parameter, tambahkan return
    static int getNim() {
        return nim;
    }

    Mahasiswa(string pnama) : nama(pnama) {
        setID();
    }
};

// Inisialisasi variabel static di luar class
int Mahasiswa::nim = 0;

void Mahasiswa::setID() {
    id = ++nim;
}

void Mahasiswa::printAll() {
    cout << "ID =   " << id << endl;
    cout << "Nama = " << nama << endl;
    cout << endl;
}

int main() {
    Mahasiswa mhs1("Sri Dadi");
    Mahasiswa mhs2("Budi Jatmiko");

    Mahasiswa::setNim(9);
    Mahasiswa mhs3("Andi Janu");
    Mahasiswa mhs4("Joko Widono");

    mhs1.printAll();
    mhs2.printAll();
    mhs3.printAll();
    mhs4.printAll();

    cout << "Akses dari luar object = " << Mahasiswa::getNim() << endl;
    
    return 0;
}