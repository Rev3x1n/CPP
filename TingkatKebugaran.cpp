#include <iostream>
using namespace std;

int main()
{
    // Deklarasi variable
    int langkah;
    
    // Input Pengguna
    cout << "Program Cek Kebugaran Member !" << endl;
    cout << "Masukkan jumlah langkah anda perhari : ";
    cin >> langkah;
    
    cout << "Kondisi tubuh Anda : ";
    
    // Pengambilan keputusan
    if(langkah >= 10000){
        cout << "Sangat Bugar";
    } else if(langkah >= 7000){
        cout << "Bugar";
    } else if (langkah >= 4000){
        cout << "Cukup Aktif";
    } else{
        cout << "Kurang Aktif";
    }

    return 0;
}