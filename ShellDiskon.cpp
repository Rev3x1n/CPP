#include <iostream>
using namespace std;

int main()
{
    // Deklarasi variable
    int total_belanja, harga_akhir;
    
    // Input User
    cout << "Total belanjaan anda : ";
    cin >> total_belanja ;
    
    // Menetapkan diskon belanjaan
    if(total_belanja >= 100000){ // Mengecek kondisi total_belanja yang pertama
        harga_akhir = total_belanja - (total_belanja * 0.2);
        cout << "Total yang harus dibayar (diskon 20% ) : " << harga_akhir;
    } else if (total_belanja >= 50000){ // Mengecek kondisi total_belanja yang kedua
        harga_akhir = total_belanja - (total_belanja * 0.1);
        cout << "Total yang harus dibayar (diskon 10% ) : " << harga_akhir;
    } else { // Menjalankan perintah kondisi else, apabila kondisi 1 dan 2 tidak terpen
        cout << "Total yang harus dibayar (diskon 0% ) : " << total_belanja;
    }
    return 0;
}