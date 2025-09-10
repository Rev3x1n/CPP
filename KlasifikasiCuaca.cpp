#include <iostream>
using namespace std; 

int main()
{
    // Deklarasi Variable
    int suhu;
    
    // Input Suhu sekarang
    cout << "Masukkan derajat suhu : ";
    cin >> suhu;
    
    // Keputusan 
    if (suhu <= 10){
        cout << "Dingin";
    } else if (suhu <= 20){
        cout << "Sejuk";
    } else if (suhu <= 30){
        cout << "Hangat";
    } else if(suhu >= 31){
        cout << "Panas";
    }
    
    return 0;
}