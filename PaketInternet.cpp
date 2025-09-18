#include <iostream>
using namespace std;

int main()
{
    int opsi;
    
    cout << "================================================" << endl;
    cout << "   SELAMAT DATANG DI TOKO PAKET INTERNET KAMI" << endl;
    cout << "================================================" << endl;
    cout << "Berikut Pilihan internet yang kami sediakan !" << endl;
    cout << "1. 5GB / Rp 20.000" << endl;
    cout << "2. 10GB / Rp 35.000" << endl;
    cout << "3. 20GB / Rp 60.000" << endl;
    cout << "4. Unlimited / Rp 100.000" << endl;
    
    cout << "\nSilahkan pilih paket internet (1-4) : ";
    cin >> opsi;

    switch(opsi){
        case 1:
            cout << "Anda membeli paket 5GB / Rp 20.000" << endl;
            break;
        case 2:
            cout << "Anda membeli paket 10GB / Rp 35.000" << endl;
            break;
        case 3:
            cout << "Anda membeli paket 20GB / Rp 60.000" << endl;
            break;
        case 4:
            cout << "Anda membeli paket unlimited / Rp 100.000" << endl;
            break;
        default:
            cout << "Pilihan tidak valid!" << endl;
    }
    return 0;
}