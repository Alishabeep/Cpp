#include <iostream>
using namespace std;

struct Mobil {
    string merk;
    int tahun;
    string warna;
};

int main() {
    Mobil mobil1, mobil2;

    mobil1.merk = "Toyota";
    mobil1.tahun = 2020;
    mobil1.warna = "Hitam";

    mobil2.merk = "Honda";
    mobil2.tahun = 2018;
    mobil2.warna = "Putih";

    cout << "Data Mobil 1:\n";
    cout << "Merk  : " << mobil1.merk << endl;
    cout << "Tahun : " << mobil1.tahun << endl;
    cout << "Warna : " << mobil1.warna << endl << endl;

    cout << "Data Mobil 2:\n";
    cout << "Merk  : " << mobil2.merk << endl;
    cout << "Tahun : " << mobil2.tahun << endl;
    cout << "Warna : " << mobil2.warna << endl;

    return 0;
}
