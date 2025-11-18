#include <iostream>
using namespace std;

struct Siswa {
    string nama;
    string kelas;
    int nis;
};

int main() {
    Siswa siswa[3];

    siswa[0] = {"Rani", "X RPL 1", 1123};
    siswa[1] = {"Dika", "X RPL 1", 1124};
    siswa[2] = {"Lala", "X RPL 1", 1125};

    for(int i = 0; i < 3; i++) {
        cout << "Data Siswa " << i + 1 << ":\n";
        cout << "Nama  : " << siswa[i].nama << endl;
        cout << "Kelas : " << siswa[i].kelas << endl;
        cout << "NIS   : " << siswa[i].nis << endl << endl;
    }

    return 0;
}
