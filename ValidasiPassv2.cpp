#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
	string pwd;
	int trial = 0;
	bool valid_digit = false;
	bool valid_length = false;
	
	do {
		cout << "input pw: ";
		cin >> pwd;
		
		valid_length = false;
		valid_digit = false;
		
		// valid length
		if (pwd.size() >= 8) {
			valid_length = true;
			cout << "valid_length" << endl;
			
			// check digit present
			for (int i = 0; i<pwd.size(); i++) {
				if (pwd[i] >= 48 && pwd[i] <= 57) { // Menggunakan ascii untuk perbandingan
					valid_digit = true;
					cout << "valid_digit" << endl;
					break;
				}
			}
		} 
		
		if (valid_digit && valid_length) {
			cout << "Akses diterima";
			break;
		}
		if (trial >= 3) {
			cout << "Akses ditolak";
		}
		// if not valid should continue
		cout << "Password tidak valid! Minimal 8 karakter dan mengandung angka." << endl;
		trial++; 
	} while (trial < 3);
	
	return 0;
}