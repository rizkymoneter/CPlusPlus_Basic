#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <math.h>
#include <windows.h>

char tanda;
int  loop, pilihan;
float reamur[100], totalreamur = 0, reamurmax, reamurmin;
using namespace std;

void gotoxy (int x, int y ) // Koordinat Tabel
    {
          COORD coord;
          coord.X = x;
          coord.Y = y;
          SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
    }

 void min(float terima[100])
    {
      float suhumin = terima[0];
      for (int i = 0; i < loop; i++)
      {
          if (terima[i] < suhumin)
          {
            suhumin = terima[i];
          }
      }
      gotoxy(15,25); cout << "Suhu Terkecil Adalah : " << suhumin;
    }

 void max (float terima[100])
        {
          float suhumax = reamur[0];
          for (int i = 0; i < loop; i++)
          {
              if (terima[i] > suhumax)
              {
                suhumax = reamur[i];
              }
          }
        gotoxy(15,26); cout<<"Suhu Terbesar Adalah : " << suhumax;
        }

int main()

    {
      gotoxy(15,7); cout << "##########################################" << endl;
      gotoxy(15,6); cout << "#       Celsius      #       Reamur      #" << endl;
      gotoxy(15,5); cout << "##########################################" << endl;
      gotoxy(56,4); cout << "#" << endl;
      gotoxy(15,1); cout << "##########################################" << endl;
      gotoxy(15,2); cout << "#            KONVRENSI SUHU              #" << endl;
      gotoxy(15,3); cout << "##########################################" << endl;
      gotoxy(15,4); cout << "# Jumlah Suhu yang akan di esekusi : " , cin >> loop ;


      int celsius[loop];
      for (int i = 0; i <loop; i++)
      {
         gotoxy(15,8+i); cout << "#         ", cin >> celsius[i], cout << "" ;
         reamur[i]= celsius[i] * 0.8;
         totalreamur+= reamur[i];

         gotoxy(36,8+i); cout << "#       " << reamur[i];
         gotoxy(56,8+i); cout << "#";
      }
      gotoxy(56,24); cout << "#" << endl;
      gotoxy(15,18); cout << "##########################################" << endl;
      gotoxy(15,19); cout << "#               Pilih menu               #" << endl;
      gotoxy(15,20); cout << "##########################################" << endl;
      gotoxy(15,21); cout << "#  1. Nilai Min                          #" << endl;
      gotoxy(15,22); cout << "#  2. Nilai Max                          #" << endl;
      gotoxy(15,23); cout << "##########################################" << endl;

      do {

        gotoxy(15,24); cout << "# Masukkan pilihan : ", cin >> pilihan;


              if (pilihan == 1)
                  {
                    min (reamur);
                  }
              else if(pilihan == 2)
                  {
                    max (reamur);
                  }
              else{}

        gotoxy(15,27); cout << "Ingin Mencoba Lagi? ";
        gotoxy(15,28); cout << "Ketik Y atau y jika ingin mengulang ";
        cin >> tanda;
      }
      while((tanda=='Y')||(tanda=='y'));
          gotoxy(15,29); cout << "anda keluar";
          return 0;
    }
