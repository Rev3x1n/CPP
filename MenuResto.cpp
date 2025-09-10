#include <iostream>
using namespace std;
int main()
{
    // Deklarasi Variabel
    int pilihan;
    
    // Daftar Menu
    cout << "=======================================" << endl;
    cout << "      Menu Restoran Masakan Bunda" << endl;
    cout << "=======================================" << endl;
    cout << "1. Nasi Goreng" << endl;
    cout << "2. Mie Ayam" << endl;
    cout << "3. Soto Ayam" << endl;
    cout << "4. Exit" << endl;
    
    // Input Pilihan Menu
    cout << "\nMau makan apa : ";
    cin >> pilihan;

    // Output
    if(pilihan == 1){
        cout << "Anda memilih Nasi Goreng" << endl;
    } else if(pilihan == 2){
        cout << "Anda memilih Mie Ayam" << endl;
    } else if (pilihan == 3){
        cout << "Anda memilih Soto Ayam" << endl;
    } else if (pilihan == 4){
        cout << "Terima kasih, keluar dari program" << endl;
    } else{
        cout << "Pilihan tidak tersedia" << endl;
    }
    return 0;
}