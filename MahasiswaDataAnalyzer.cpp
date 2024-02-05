#include <iostream>
#include <string>

using namespace std;

struct Mahasiswa
{
    string NIM;
    string NAMA;
    double NILAI_PEMROGRAMAN;
};

int main()
{
    const int JUMLAH_MAHASISWA = 10;

    Mahasiswa dataMahasiswa[JUMLAH_MAHASISWA];

    for (int i = 0; i < JUMLAH_MAHASISWA; ++i)
    {
        cout << "Masukkan data mahasiswa ke-" << i + 1 << ":" << endl;
        cout << "NIM: ";
        cin >> dataMahasiswa[i].NIM;
        cout << "NAMA: ";
        cin.ignore();
        getline(cin, dataMahasiswa[i].NAMA);
        cout << "NILAI PEMROGRAMAN: ";
        cin >> dataMahasiswa[i].NILAI_PEMROGRAMAN;
        cout << endl;
    }

    double totalNilai = 0;
    for (int i = 0; i < JUMLAH_MAHASISWA; ++i)
    {
        totalNilai += dataMahasiswa[i].NILAI_PEMROGRAMAN;
    }

    double rataRata = totalNilai / JUMLAH_MAHASISWA;

    cout << "Data Mahasiswa dan Nilai Rata-rata:" << endl;
    for (int i = 0; i < JUMLAH_MAHASISWA; ++i)
    {
        cout << "Mahasiswa ke-" << i + 1 << ": " << dataMahasiswa[i].NIM << " - " << dataMahasiswa[i].NAMA
             << " - Nilai Pemrograman: " << dataMahasiswa[i].NILAI_PEMROGRAMAN << endl;
    }

    cout << "Nilai Rata-rata Pemrograman untuk " << JUMLAH_MAHASISWA << " mahasiswa: " << rataRata << endl;

    return 0;
}
