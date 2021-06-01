#include <conio.h>
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <windows.h>

using namespace std;

COORD coord={0,0};
void gotoxy(int x,int y){
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
float phi = 3.14,hasil;

float lingkaran(float r){
    hasil = phi*r*r;
    return hasil;
}
float jajargenjang (float alas, float tinggi){
    hasil = alas*tinggi;
    return hasil;
}
float trapesium(float atas, float bawah, float tinggi){
    hasil =((atas+bawah)*tinggi)/2;
    return hasil;
}

int main()
{
    float jari,luas,al,ti,at;
    char x;
    kembali:
    cout<<"***=-Daftar Operasi Perhitungan Luas-=***"<<endl;
    gotoxy(14,2); cout<<"A. Lingkaran";
    gotoxy(14,3); cout<<"B. Trapesium";
    gotoxy(14,4); cout<<"C. Jajar Genjang";
    gotoxy(0,6); cout<<"Silahkan Pilih Operasi = ";
    cin>>x;

    switch(x){
    case 'A':
    case 'a':
        system("cls");
        cout<<"Masukkan Jari-jari = ";
        cin>>jari;
        luas=lingkaran(jari);
        gotoxy(0,2); cout<<"Diketahui"; gotoxy(12,2); cout<<" : ";
        gotoxy(0,3); cout<<"PHI"; gotoxy(17,3); cout<<" = "<<phi;
        gotoxy(0,4); cout<<"Jari-jari(r)"; gotoxy(17,4); cout<<" = "<<jari;
        gotoxy(0,5); cout<<"luas"; gotoxy(17,5); cout<<" = PHI*r*r = "<<phi<<"*"<<jari<<"*"<<jari;
        gotoxy(0,6); cout<<"Luas Lingkaran"; gotoxy(17,6); cout<<" = "<<luas;
        cout<<endl;
        break;
    case 'B':
    case 'b':
        system("cls");
        cout<<"Masukkan Panjang atap     = ";
        cin>>at;
        cout<<"Masukkan Panjang alas     = ";
        cin>>al;
        cout<<"Masukkan Tinggi Trapesium = ";
        cin>>ti;
        luas=trapesium(at,al,ti);
        gotoxy(0,4); cout<<"Diketahui"; gotoxy(12,4); cout<<" : ";
        gotoxy(0,5); cout<<"Atap"; gotoxy(17,5); cout<<" = "<<at;
        gotoxy(0,6); cout<<"Alas"; gotoxy(17,6); cout<<" = "<<al;
        gotoxy(0,7); cout<<"Tinggi"; gotoxy(17,7); cout<<" = ((Atap + Alas)*tinggi)/2 = "<<"("<<"("<<at<<"+"<<al<<")"<<"*"<<ti<<")/2";
        gotoxy(0,8); cout<<"Luas Traapesium"; gotoxy(17,8); cout<<" = "<<luas;
        cout<<endl;
        break;
    case 'C':
    case 'c':
        system("cls");
        cout<<"Masukkan Alas   = ";
        cin>>al;
        cout<<"Masukkan Tinggi = ";
        cin>>ti;
        luas=jajargenjang(al,ti);
        gotoxy(0,3); cout<<"Diketahui"; gotoxy(12,3); cout<<" : ";
        gotoxy(0,4); cout<<"Alas"; gotoxy(17,4); cout<<" = "<<al;
        gotoxy(0,5); cout<<"Tinggi"; gotoxy(17,5); cout<<" = "<<ti;
        gotoxy(0,6); cout<<"luas"; gotoxy(17,6); cout<<" = alas*tinggi = "<<al<<"*"<<ti;
        gotoxy(0,7); cout<<"Luas JajarGenjang"; gotoxy(17,7); cout<<" = "<<luas;
        cout<<endl;
        break;
    default:
        system("cls");
        cout<<"Maaf, Inputan anda salah tolong ulangi kembali!"<<endl;
        goto kembali;
    }
    ulang:
    cout<<endl<<"Apakah anda ingin melakukan operasi lain (Yy/Nn)?";
    cin>>x;

    if((x == 'Y')||(x == 'y')){
        system("cls");
        goto kembali;
    } else if ((x == 'N') || (x == 'n')){
        cout<<"Terima Kasih!";
        return 0;
    } else {
        cout<<"Maaf pilihan anda salah! Harap masukkan kembali!"<<endl;
        goto ulang;
    }
}
