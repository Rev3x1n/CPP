/***********************************************************
                    Menentukan Kategori Usia
************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int umur;
    cout << "Masukkan umur : ";
    cin >> umur;
    
    if (umur <= 5){
        cout << "Balita";
    } else if(umur <= 12){
        cout << "Anak-anak";
    } else if (umur <= 18){
        cout << "Remaja";
    } else if(umur <= 60){
        cout << "Dewasa";
    } else {
        cout << "Lansia";
    }

    return 0;
}