#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    // DEKLARASI VARIABLE
    int IDR; 
    const double kurs_USD = 15000; 
    const double kurs_EUR = 16000;
    const double kurs_JPY = 100;
    
    
    // INPUT PENGGUNA
    cout << "=== KONVERSI MATA UANG ===" << endl;
    cout << "Masukkan Jumlah Rupiah : ";
    cin >> IDR;

    // MENGHITUNG KONVERSI MATA UANG
    double hasilUSD = IDR / kurs_USD;
    double hasilEUR = IDR / kurs_EUR;
    double hasilJPY = IDR / kurs_JPY;

    // OUTPUT HASIL KONVERSI
    cout << "\n=== HASIL KONVERSI ===" << endl;
    cout << fixed << setprecision(2);
    cout << "USD: " << IDR << " IDR = " << hasilUSD << " USD" << endl;
    cout << "EUR: " << IDR << " IDR = " << hasilEUR << " EUR" << endl;
    cout << "JPY: " << IDR << " IDR = " << hasilJPY << " JPY" << endl;

    return 0;
}