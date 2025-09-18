#include <iostream>
using namespace std;

int main()
{
    char hari, jenisFilm;
    int jam;
    
    // Input Pengguna
    cout << "SELAMAT DATANG DI BIOSKOP LABTEK 3 :v" << endl;
    cout << "Silahkan isi format menonton anda!" << endl;
    
    cout << "\nMasukkan hari (W=Weekday, A=Akhir pekan): ";
    cin >> hari;
    
    cout << "Masukkan jam (format 24 jam) : ";
    cin >> jam;
    
    cout << "Apakah film 3D? (Y/N): ";
    cin >> jenisFilm;
    
    if(hari == 'W' || hari == 'w'){
        if(jam >= 18 && jam <= 24){
            cout << "Total harga tiket adalah Rp. 55.000";
        }else if (jam >= 0 && jam <= 17) {
            cout << "Total harga tiket adalah Rp. 50.000";
        }else{
            cout << "Waktu yang anda masukkan tidak dalam kurun waktu 24 jam. Terimakasih !";
        }
    } else if (hari == 'A' || hari == 'a'){
        if(jenisFilm == 'Y' || jenisFilm == 'y'){
            cout << "Total harga tiket film 3d adalah Rp. 75.000";
        } else{
            cout << "Total harga tiket adalah Rp. 65.000";
        }
    }else{
        cout << "Input yang anda masukkan mungkin salah";
    }

    return 0;
}