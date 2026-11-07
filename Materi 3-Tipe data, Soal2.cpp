
#include <iostream>
using namespace std;

int main()
{
    string nama;
    float aktif, tugas, ujian;
    float na, nt, nu, akhir;

    cout << "PROGRAM HITUNG NILAI AKHIR" << endl;

    cout << "Nama Siswa : ";
    getline(cin, nama);

    cout << "Nilai Keaktifan : ";
    cin >> aktif;

    cout << "Nilai Tugas : ";
    cin >> tugas;

    cout << "Nilai Ujian : ";
    cin >> ujian;

    na = aktif * 20 / 100;
    nt = tugas * 30 / 100;
    nu = ujian * 50 / 100;

    akhir = na + nt + nu;

    cout << "\nSiswa yang bernama " << nama << endl;
    cout << "Nilai Keaktifan * 20% : " << na << endl;
    cout << "Nilai Tugas * 30% : " << nt << endl;
    cout << "Nilai Ujian * 50% : " << nu << endl;

    cout << "Nilai Akhir : " << akhir;

    return 0;
}
