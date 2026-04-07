#include <iostream>
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
    cin >> mhs.nama;
    cout << "Isikan data alamat : ";
    cin >> mhs.alamat.desa; 
    cout << "Isikan data alamat : ";
    cin >> mhs.alamat.kota; 
    cout << "Isikan data umur : ";
    cin >> mhs.umur; 
    cout << endl;
}