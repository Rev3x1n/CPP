#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    // DEKLARASI VARIABLE
    double angka1, angka2, hasil1, hasil2, hasil3, hasil4;  

    // USER INPUT
    cout << "=== KALKULATOR SEDERHAN ===" << endl;
    cout << "Masukkan angka ke-1 : ";
    cin >> angka1;

    cout << "Masukkan angka ke-2 : ";
    cin >> angka2;

    // MELAKUKAN OPERASI ARITMATIKA
    hasil1 = angka1 + angka2;
    hasil2 = angka1 - angka2;
    hasil3 = angka1 * angka2;
    hasil4 = angka1 / angka2;
    
    // MENCETAK HASIL OPERASI
    cout << "\n=== KALKULATOR SEDERHAN ===" << endl;
    cout << setw(15) << left << "Penjumlahan : " << angka1 << " + " << angka2 << " = " << hasil1 << endl;
    cout << setw(15) << left << "Pengurangan : " << angka1 << " - " << angka2 << " = " << hasil2 << endl;
    cout << setw(15) << left << "Perkalian : " << angka1 << " * " << angka2 << " = " << hasil3 << endl;
    cout << setw(15) << left << "Pembagian : " << angka1 << " / " << angka2 << " = " << hasil4 << endl;

    return 0;
}