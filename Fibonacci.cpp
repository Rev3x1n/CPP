#include <iostream>
using namespace std;

int main()
{
	// Inisialisasi Variabel
	int x = 1;
	int y = 0;
    cout << x + y << " ";
    
    // Perulangan untuk mencapai batas fibonacci
    for(int i = 1; i <= 5; i++){
        x = x + y; // Swap to Variable
        y = x - y;
        cout << x << " ";
    }
    
	return 0;
}