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

if (n <= 20)
{ // Membuat Kondisi n tidak lebih dari 20
break;
}
else
{
cout << "\nArray yang anda masukkan maksimal 20 Elemen. \\n";
}
}
cout << endl; // Membuat jarak per baris program
cout << "===============" << endl; // Membuat tampilan susunan data element array
cout << "Masukkan Elemen Array" << endl;
cout << "==============="

for (int i = 0; i < n; i++) // Menggunakan perulangan for untuk menyimpan data pada array
