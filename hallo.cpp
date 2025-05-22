#include <iostream>
#include <string>
#include "signature.h"
using namespace std;

int main()
{
    WM();

    cout << "=====================================\n";
    cout << "PROGRAM INPUT NAMA\n";
    cout << "=====================================\n";
   
    string nama[5];
    for (int i = 0; i<5; i++)
    {
        cout << "Masukkan Nama Ke- " << i+1 << ":";
        getline(cin,nama[i]);
    }

    cout <<"\n";
    cout << "=====================================\n";
    cout << "Daftar Nama Yang Telah Diinputkan : \n";
    cout << "=====================================\n";
    cout << "\n";

    for (int i = 0; i<5; i++)
    {
        cout << "Nama Ke- " << i+1 << ": " << nama[i] << "\n";
    }

    cout << "\n";
    
    return 0;
}
