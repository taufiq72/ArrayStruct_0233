#include <iostream>
#include <string>
using namespace std;

struct detailalamat
{
    string desa;
    string kota;
};

struct Orang
{
    string nama;
    detailalamat alamat;
    int umur;
};

int main()
{
    //Deklarasi variabel struct
    Orang mhs;
    //Mengisi Data
    cout << "Isikan data nama : ";
    getline(cin, mhs.nama);
    cout << "Isikan data desa : ";
    getline(cin, mhs.alamat.desa); 
    cout << "Isikan data kota : ";
    getline(cin, mhs.alamat.kota); 
    cout << "Isikan data umur : ";
    cin >> mhs.umur; 
    cout << endl;

    //menampilkan data
    cout << "Data Tampil" << endl;
    cout << "Nama :" << mhs.nama << endl;
    cout << "Desa :" << mhs.alamat.desa << endl;
    cout << "Kota :" << mhs.alamat.kota << endl;
    cout << "Umur : " << mhs.umur << endl;
}