#include <iostream>
using namespace std;

int main()
{
    // Inisialisi dan Deklarasi Variable
    int nilaiMahasiswa;
    float avgnilai = 0;
    int jumper = 0; // jumper --> Jumlah Perulangan
    
    // Perulangan untuk menentukan Rata-rata nilai dengan exit -1
    while(nilaiMahasiswa != -1){
        cout << "Masukkan nilai (akhiri dengan -1): ";
        cin >> nilaiMahasiswa;
        
        // Menghitung rata-rata
        if(nilaiMahasiswa != -1){
            avgnilai += nilaiMahasiswa;
        } else {
            cout << "Rata-rata nilai: " << avgnilai / jumper;
            break;
        }
        
        // Menambah 1 setiap melakukan iterasi perulangan
        jumper++;
    }
    return 0;
}