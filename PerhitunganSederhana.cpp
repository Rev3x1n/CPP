#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    // DEKLARASI VARIABEL ANGKA
    double angka1, angka2;
    double rataRata, jumlah, selisih, perkalian, total;
    cout << "=== PERHITUNGAN SEDERHANA ===" << endl;

    // INPUT DATA
    cout << "Masukkan angka pertama : ";
    cin >> angka1;
    
    cout << "Masukkan angka kedua : ";
    cin >> angka2;

    // PERHITUNGAN MATEMATIKA
    rataRata = (angka1 + angka2) / 2;
    jumlah = angka1 + angka2;
    selisih = angka1 - angka2;
    perkalian = angka1 * angka2;
    
    // DEMONSTRASI COMPOUND ASSIGNMENT
    total = 0;
    total += angka1;
    total += angka2;

    // OUTPUT PERHITUNGAN
    cout << "\n=== HASIL PERHITUNGAN ===" << endl;
    cout << setw(15) << left << "Rata-rata" << ": (" << angka1 << " + " << angka2 << ") / 2 = " << rataRata << endl;
    cout << setw(15) << left << "Jumlah" << ": " << angka1 << " + " << angka2 << " = " << jumlah << endl;
    cout << setw(15) << left << "Selisih" << ": " << angka1 << " - " << angka2 << " = " << selisih << endl;
    cout << setw(15) << left << "Perkalian" << ": " << angka1 << " * " << angka2 << " = " << perkalian << endl;
    cout << setw(15) << left << "Total (compound)" << ": 0" << " + " << angka1 << " + " << angka2 << " = " << total << endl;

	return 0;
}