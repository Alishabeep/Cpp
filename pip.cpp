#include <iostream>
using namespace std;

struct Buku {
    string judul;
    string pengarang;
    int harga;
};

void tampil(Buku buku) {
    cout << "Judul     : " << buku.judul << endl;
    cout << "Pengarang : " << buku.pengarang << endl;
    cout << "Harga     : " << buku.harga << endl;
}

int main() {
    Buku buku1;

    buku1.judul = "Laskar Pelangi";
    buku1.pengarang = "Andrea Hirata";
    buku1.harga = 85000;

    tampil(buku1);

    return 0;
}
