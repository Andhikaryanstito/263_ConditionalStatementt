#include <iostream>

using namespace std;

float fungsiHitungLuasBerparameter(float a, float b){
    return a * b;
}

int main()
{//begin
    float Panjang, Lebar;
    cout << "Masukkan Panjangnya = ";
    cin >> Panjang;
    cout << "Masukkan Lebarnya = ";
    cin >> Lebar;
    cout << "Luas persegi panjang = " << fungsiHitungLuasBerparameter(Panjang, Lebar);
}//end