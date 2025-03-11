#include <iostream>

using namespace std;

float Panjang, Lebar, Luas;
void prosedurhitungluas(){
    Luas = Panjang * Lebar;

}

void prosedurInputdata(){
    cout << "Masukkan panjangnya =  ";
    cin >> Panjang ;
    cout << "Masukkan lebarnya = ";
    cin >> Lebar;
}

void prosedurOutputData(){
    cout <<"Luas persegi panjang = " << Luas;
}


int main(){
        prosedurInputdata();   // Memanggil prosedur untuk input data
        prosedurhitungluas();  // Menghitung luas
        prosedurOutputData();  // Menampilkan hasil
}