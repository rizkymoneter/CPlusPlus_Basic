#include <iostream>
#include <conio.h>
#include <string.h>
#include <windows.h>

using namespace std;

int pilihan;

// STURCT DATA

    struct master_pilihan1_balok
        {
            float mochamadrizkymoneter_90484_panjang_balok[15];
            float mochamadrizkymoneter_90484_lebar_balok[25];
            float mochamadrizkymoneter_90484_tinggi_balok[50];

        }pilihan1;

    struct master_pilihan2_tabung
        {
            float mochamadrizkymoneter_90484_jari_tabung[15];
            float mochamadrizkymoneter_90484_tinggi_tabung[50];

        }pilihan2;

      struct master_pilihan1_bola
        {
            float mochamadrizkymoneter_90484_jari_bola[15];

        }pilihan3;
//-----------------------------------------------------------------


//FUNCION CLASS
   void balok90484(){
        float hasil_balok;


        float p = pilihan1.mochamadrizkymoneter_90484_panjang_balok[0];
        float l = pilihan1.mochamadrizkymoneter_90484_lebar_balok[0];
        float t = pilihan1.mochamadrizkymoneter_90484_tinggi_balok[0];
        hasil_balok = p*l*t;

        cout << " Hasil : " << hasil_balok;
   }

    void tabung90484(){
        float hasil_tabung;

        float r = pilihan2.mochamadrizkymoneter_90484_jari_tabung[0];
        float t = pilihan2.mochamadrizkymoneter_90484_tinggi_tabung[0];
        float p = float(22)/7;
        hasil_tabung = r*r*p*t;

        cout << " Hasil : " << hasil_tabung;
   }

    void bola90484(){
        float hasil_bola;

        float r = pilihan3.mochamadrizkymoneter_90484_jari_bola[0];
        float p = float(22)/7;
        hasil_bola = r*r*p*4/3;

        cout << " Hasil : " << hasil_bola;
   }

int main(){

    cout << "Pilih Menu" << endl;
    cout << "1. Balok" << endl;
    cout << "2. Tabung "<< endl;
    cout << "3. Bola "<< endl;
    cout << "Masukkan Pilihan : ";
    cin >> pilihan;

        if (pilihan == 1){

        cout << "Menghitung Balok" << endl;
        cout << "Masukan Panjang : "; cin >> pilihan1.mochamadrizkymoneter_90484_panjang_balok[0];
        cout << "Masukan Lebar : " ;   cin >> pilihan1.mochamadrizkymoneter_90484_lebar_balok[0];
        cout << "Masukan Tinggi : " ;  cin >> pilihan1.mochamadrizkymoneter_90484_tinggi_balok[0];
        cout << " " << endl;
        balok90484();
    }
        else if (pilihan == 2){

        cout << "Menghitung Tabung" << endl;
        cout << "Masukan Jari Jari : "; cin >> pilihan2.mochamadrizkymoneter_90484_jari_tabung[0];
        cout << "Masukan Tinggi : " ;  cin >> pilihan2.mochamadrizkymoneter_90484_tinggi_tabung[0];
        cout << " " << endl;
        tabung90484();
    }

       else if (pilihan == 3){

        cout << "Menghitung Bola" << endl;
        cout << "Masukan Jari Jari : "; cin >> pilihan3.mochamadrizkymoneter_90484_jari_bola[0];
        cout << " " << endl;
        bola90484();
    }

    return 0;
}
