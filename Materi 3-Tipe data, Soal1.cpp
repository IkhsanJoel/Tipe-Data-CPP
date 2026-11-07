
#include <iostream>
using namespace std;

int main()
{
    string npm, nama;
    float t1, t2, t3, rata;

    cout << "PROGRAM HITUNG NILAI RATA-RATA" << endl;

    cout << "NPM : ";
    cin >> npm;

    cout << "Nama : ";
    cin.ignore();
    getline(cin, nama);

    cout << "Nilai Tugas I : ";
    cin >> t1;

    cout << "Nilai Tugas II : ";
    cin >> t2;

    cout << "Nilai Tugas III : ";
    cin >> t3;

    rata = (t1 + t2 + t3) / 3;

    cout << "\n" << npm << " Siswa yang bernama " << nama << endl;
    cout << "Memperoleh nilai rata-rata " << rata;

    return 0;
}
