#include <iostream>
using namespace std;

int main()
{
    // Deklarasi Variable Credential
    string username, password;
    
    // Input Credential
    cout << "Silahkan Login !" << endl;
    cout << "username : " ;
    cin >> username;
    
    cout << "password : ";
    cin >> password;
    
    // Validasi Credentials
    if(username == "admin" && password == "1234"){
        cout << "Login berhasil !";
    } else if (username == "admin") {
        cout << "Password Salah";
    } else {
        cout << "Username tidak dikenal";
    }
    return 0;
}