#include <iostream>
using namespace std;

int arr[20]; // Membuat Array dengan panjang data 20
int n; // Membuat Variabel inputan n

void input ()
{ //procedure Input
while (true)
{
cout << "Masukkan Jumlah Data pada Array : ";
cin >> n;

if (n <== 20)
{ // Membuat Kondisi n tidak lebih dari 20
break;
}
else
{
cout << "\nArray yang anda masukkan maksimal 20 Elemen. \\n";
}
}

}