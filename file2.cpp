#include <iostream>

using namespace std;

float Panjang, Lebar;

float fungsiHitungLuas(){
    return Panjang * Lebar;
}

int main()
{
    cout << "Masukkan panjangnya = ";
    cin >> Panjang;
    cout << "Masukkan lebarnya";
    cin >> Lebar;
    cout << "Luas persegi panjang = " <<fungsiHitungLuas();
}