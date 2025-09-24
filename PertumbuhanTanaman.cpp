#include <iostream>
using namespace std;

int main()
{
	// Inisialisasi Variabel
	int tinggi = 10;
	int hari = 0;

    // Perulangan untuk mencapai batas tinggi yang di tentukan
	while(tinggi <= 50){
	    hari += 1;
	    tinggi += 2;
	    cout << "Hari " << hari << ": Tinggi tananman = " << tinggi << "cm" << endl;
	}
	
    // Mencetak batas hari untuk mencapai 50 cm
	cout << "Butuh" << hari << "hari agar tinggi tanaman melebihi 50 cm.";
	return 0;
}