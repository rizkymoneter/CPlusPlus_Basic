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

int main()
{
    float farhet = 0;
    cout<<"-----------------------------------"<<endl;
    cout<<"|         Tabel Konversi          |"<<endl;
    cout<<"-----------------------------------"<<endl;
    cout<<"|    Celcius    |    Farenheit    |"<<endl;
    cout<<"-----------------------------------"<<endl;
    for (int i=1;i<=50;i++){
        farhet = (i*1.8)+32;
        cout<<"|"; gotoxy(8,i+4); cout<<i<<"\370"; gotoxy(16,i+4); cout<<"|"; gotoxy(24,i+4); cout<<farhet<<"\370"; gotoxy(34,i+4); cout<<"|";
        cout<<endl;
    }
    cout<<"-----------------------------------"<<endl;
}
