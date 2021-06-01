#include <iostream>
#include <conio.h>
#include <string.h>
#include <windows.h>

using namespace std;

int main(){

int inputnilai,i ;
    struct nilai
    {
        string nilai_a [1] = {"A"} ;
        string nilai_bb [1] = {"B+"} ;
        string nilai_b [1] = {"B"} ;
        string nilai_cc [1] = {"C+"} ;
        string nilai_c [1] = {"C"} ;
        string nilai_d [1] = {"D"} ;
        string nilai_e [1] = {"E"} ;

    }nilai;

    cout << "Masukkan Nilai Matakuliah: ";
    cin >> inputnilai;

    if (inputnilai >= 80 && inputnilai <=100){
        cout << "Nilai Anda Adalah : " << nilai.nilai_a[0];
    }
    else if (inputnilai >= 70 && inputnilai <=79){
        cout << "Nilai Anda Adalah : " << nilai.nilai_bb[0];
    }
    else if (inputnilai >= 65 && inputnilai <=69){
        cout << "Nilai Anda Adalah : " << nilai.nilai_b[0];
    }
    else if (inputnilai >= 60 && inputnilai <=64){
        cout << "Nilai Anda Adalah : " << nilai.nilai_cc[0];
    }
    else if (inputnilai >= 55 && inputnilai <=59){
        cout << "Nilai Anda Adalah : " << nilai.nilai_c[0];
    }
    else if (inputnilai >= 1 && inputnilai <=54){
        cout << "Nilai Anda Adalah : " << nilai.nilai_d[0];
    }
    else if (inputnilai == 0 ){
        cout << "Nilai Anda Adalah : " << nilai.nilai_d[0];
    }
    else{
        cout << "Salah Input" << endl;
    }


}
