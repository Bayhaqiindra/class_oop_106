#include <iostream>
using namespace std;

class Mahasiswa {
public:
    string nim;
    string nama;
public: void cetak() {
    cout << "NIM = " << nim;
    cout << "\nNama = " << nama;
}
};

class Matakuliah {
private:
    string kota;
    string namaM;
    int sks;
public:
