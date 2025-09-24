// Versi 1
#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Deklarasi dan inisialiasi variabel
	string password;
	bool panjang = false;
	bool adaAngka = false;
	int jumper = 0;

    // Perulangan untuk meminta passord dari user
	while(jumper < 3) {
		panjang = password.length() >= 8;
		cout << "Masukkan password (Minima 8 character) : ";
		getline(cin, password);
    
        // Perulangan untuk mengecek apakah password memiliki angka
		for (char c : password) {
            // Mengubah nilai variabel adaAngka menjadi true jika password mega angka			
			if (isdigit(c)) adaAngka = true;
		}
        
        // Validasi password
		if (panjang && adaAngka) {
			cout << "Akses diterima";
			break;
		} else if(jumper < 3) {
			cout << "Password tidak valid! Minimal 8 karakter dan mengandung angka." << endl;
		}
        
        // Mereset variabel
		adaAngka = false;
		// increment jumper(jumlah perulangan)
		jumper++;
	}

    // Mengecek apakah perulangan sudah mencapai batas yang di tentukan
	if(jumper == 3) {
		cout << "Percobaan Anda sudah mencapai batas, yaitu 3 kali percobaan" << endl;
	}

	return 0;
}