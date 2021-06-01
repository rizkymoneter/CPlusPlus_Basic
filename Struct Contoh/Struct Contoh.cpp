#include <iostream>
#include <conio.h>
#include <string.h>
#include <windows.h>

using namespace std;

int main(){

    int pilihan;
    //string nama_mhs_2[1] = {"Mochamad Rizky Moneter"};

    struct master_pilihan1
    {
        char nama_mhs_1[15];
        char npm_mhs_1[25];
        char alamat_mhs_1[50];
        int umur_mhs_1;
    }pilihan1;

    struct master_pilihan2
    {
        string nama_mhs_2[1] = {"Mochamad Rizky Moneter"};
       string npm_mhs_2[1] = {"06.2019.1.90484"};
        string  alamat_mhs_2[1] = {"Sidoarjo"};
        string  umur_mhs_2[1] = {"20"};
    }pilihan2;

    cout << "Pilih Menu" << endl;
    cout << "1. Input Data Struct" << endl;
    cout << "2. Get Data Struct" << endl;
    cout << "Masukkan Pilihan : ";
    cin >> pilihan;

    if (pilihan == 1){
        cout << "Inputkan Nama Mahasiswa : "; cin >> pilihan1.nama_mhs_1;
        cout << "Inputkan NPM Mahasiswa : "; cin >> pilihan1.npm_mhs_1;
        cout << "Inputkan Alamat Mahasiswa : "; cin >> pilihan1.alamat_mhs_1;
        cout << "Inputkan Umur Mahasiswa : "; cin >> pilihan1.umur_mhs_1;
        system("cls");

        cout << "Nama Mahasiswa = " << pilihan1.nama_mhs_1 << endl;
        cout << "NPM Mahasiswa = " << pilihan1.npm_mhs_1 << endl;
        cout << "Alamat Mahasiswa = " << pilihan1.alamat_mhs_1 << endl;
        cout << "Umur Mahasiswa = " << pilihan1.umur_mhs_1;
        getch();
    }
    else if (pilihan == 2){


        cout << "Nama Mahasiswa = " << pilihan2.nama_mhs_2[0] << endl;
        cout << "NPM Mahasiswa = " << pilihan2.npm_mhs_2[0] << endl;
        cout << "Alamat Mahasiswa = " << pilihan2.alamat_mhs_2[0] << endl;
        cout << "Umur Mahasiswa = " << pilihan2.umur_mhs_2[0];
        getch();


    }
    else{
        cout << "Pilihan Salah";
    }


}
