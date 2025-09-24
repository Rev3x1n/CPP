#include <iostream>
using namespace std;

int main()
{
	// Inisialisasi Variabel
	int pelanggan = 0;

	// Perulangan Melayani Pelanggan
	for(int antrian = 9; antrian >= 0; antrian--) {
		pelanggan++;
		cout << "Pelanggan " << pelanggan <<  " sedang dilayani. Sisa antrian: " << antrian << " Pelanggan" <<endl;

		// Kondisi ketika semua pelanggan pelanggan sudah dilayani
		if(pelanggan == 10) {
			cout << "Semua pelanggan telah dilayani.";
		}
	}
	return 0;
}