#include <iostream>
using namespace std;

int main()
{
    //Deklarasi array disertai inisialisasi
    int dataku[5] = {10, 20, 30, 40, 50};
    //Deklarasi array tanpa inisialisasi
    int datamu[5];

    //Cara akses (membaca atau mengambil isi array)
    cout << "Isi data kedua : " << dataku[1] << endl;
    //Mengisi array
    dataku[1] = 200;
    cout << "Isi data kedua setelah diubah : "<< dataku[1] << endl;

    //Mengisi data dengan perintah satu persatu
    cout << "Isikan data pertama : ";
    cin >> datamu[0];
    cout << "Isikan data kedua : ";
    cin >> datamu[1];
    cout << "Isikan data ketiga : ";
    cin >> datamu[2];
    cout << "Isikan data keempat : ";
    cin >> datamu[3];
    cout << "Isikan data kelima : ";
    cin >> datamu[4];
    cout << endl;

    //Menampilkan data dengan perintah satu persatu
    cout << "data pertama : " << datamu[0] << endl;
    cout << "data kedua : " << datamu[1] << endl;
    cout << "data ketiga : " << datamu[2] << endl;
    cout << "data keempat : " << datamu[3] << endl;
    cout << "data kelima : " << datamu[4] << endl;
    cout << endl;

}