#include <iostream>
#include <string>
using namespace std;

struct siswa {
    string nama;
    int umur;
    float nilai;
};

int main(){
    siswa siswa1;

    siswa1.nama = "Alisha";
    siswa1.umur = 15;
    siswa1.nilai = 95;

    cout<<"Nama siswa : "<<siswa1.nama<<endl;
    cout<<"Umur siswa : "<<siswa1.umur<<endl;
    cout<<"Nilai siswa : "<<siswa1.nilai<<endl;

    return 0;
}