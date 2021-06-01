#include <iostream>
#include <conio.h>
#include <string.h>
#include <windows.h>

using namespace std;

int main(){

    int pilihan,i ;
    struct master_pilihan1
    {
        char nama_mhs_1[15];
        char npm_mhs_1[25];
        char alamat_mhs_1[50];
        int umur_mhs_1;
    }pilihan1[10];


    cout << "Pilih Berapa Jumlah Mahasiswa : ";
    cin >> pilihan;



   while(i <= pilihan){

        for(i = 1 ; i <= pilihan ; i++){
            cout << "Data Mahasiswa Ke-" << i << endl;
            cout << "Inputkan Nama Mahasiswa : "; cin >> pilihan1[i].nama_mhs_1;
            cout << "Inputkan NPM Mahasiswa : "; cin >> pilihan1[i].npm_mhs_1;
            cout << "Inputkan Alamat Mahasiswa : "; cin >> pilihan1[i].alamat_mhs_1;
            cout << "Inputkan Umur Mahasiswa : "; cin >> pilihan1[i].umur_mhs_1;
            system("cls");
        }
        for(i = 1 ; i <= pilihan ; i++){
        cout << "Mahasiswa Ke-" << i << endl;
        cout << "Nama Mahasiswa = " << pilihan1[i].nama_mhs_1 << endl;
        cout << "NPM Mahasiswa = " << pilihan1[i].npm_mhs_1 << endl;
        cout << "Alamat Mahasiswa = " << pilihan1[i].alamat_mhs_1 << endl;
        cout << "Umur Mahasiswa = " << pilihan1[i].umur_mhs_1 << endl;
        cout << " " << endl;
        }
        i++;
    }
}
