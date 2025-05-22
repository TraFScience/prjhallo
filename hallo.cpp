#include <iostream>
#include <string>
#include "signature.h"
using namespace std;

int main()
{
    WM();
   
    string nama [5];
    for (int i = 0; i<5; i++)
    {
        cout << "Masukkan Nama Ke- " << i+1 << ":";
        getline(cin,nama[i]);
    }

    return 0;
}
