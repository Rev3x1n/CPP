#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    // DEKLARASI VARIABLE
    string namaMahasiswa, NIM, jurusan, alamat, hobi, cita_cita;
    int umur;
    double IPK;
    char jenisKelamin;
    cout << "=== BIODATA MAHASISWA ===\n";

    // INPUT DATA
    cout << "Masukkan Nama Lengkapmu : ";
    getline(cin, namaMahasiswa);

    cout << "Masukkan NIM : ";
    cin >> NIM;

    cout << "Masukkan Jurusan : ";
    cin.ignore();
    getline(cin, jurusan);

    cout << "Masukkan Umur : ";
    cin >> umur;

    cout << "Masukkan Alamat : ";
    cin.ignore();
    getline(cin, alamat);

    cout << "Masukkan Hobi : ";
    getline(cin, hobi);
    
    cout << "Masukkan Cita-cita : ";
    getline(cin, cita_cita);

    cout << "Masukkan IPK : ";
    cin >> IPK;

    cout << "Masukkan Jenis Kelamin (L/P) : ";
    cin >> jenisKelamin;


    // MENAMPILKAN OUTPUT
    cout << "\n=== INFORMASI BIODATA ===" << endl;
    cout << setw(15) << left << "Nama Lengkap" << ": " << namaMahasiswa << endl; 
    cout << setw(15) << left << "Masukkan NIM" << ": " << NIM << endl; 
    cout << setw(15) << left << "Jurusan" << ": " << jurusan << endl; 
    cout << setw(15) << left << "Umur" << ": " << umur << endl; 
    cout << setw(15) << left << "Alamat" << ": " << alamat << endl; 
    cout << setw(15) << left << "Hobi" << ": " << hobi << endl; 
    cout << setw(15) << left << "Cita-cita" << ": " << cita_cita << endl; 
    cout << setw(15) << left << "IPK" << ": " << fixed << setprecision(2) << IPK << endl; 
    cout << setw(15) << left << "Jenis Kelamin" << ": " << jenisKelamin << endl; 

    return 0;
}