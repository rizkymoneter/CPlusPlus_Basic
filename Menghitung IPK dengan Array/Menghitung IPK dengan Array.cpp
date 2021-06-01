#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <math.h>
#include <windows.h>


using namespace std;

int a = 0 , c = 0;
float totalnilai = 0, totalsks = 0 , ipk;
float sks[8] = {3, 4, 4, 3, 2, 3, 3, 4};
float perkalianpersatuan[8];
float  jumlah,nilai,luarannilaiabcde[8];
string nilaiabcde[8] ={"A", "A", "B", "C", "C"};


int tabelnilai (string nilai) // Tabel Nilai
    {
            int nilaimahasiswa;
            if((nilai == "A") || (nilai == "a"))
                {
                  nilaimahasiswa = 4;
                }
            else if((nilai == "B") || (nilai == "b"))
                {
                  nilaimahasiswa = 3;
                }
            else if((nilai == "C")||(nilai == "c"))
                {
                  nilaimahasiswa = 2;
                }
            else if((nilai == "D") || (nilai == "d"))
                {
                  nilaimahasiswa = 1;
                }
            else if((nilai == "E")||(nilai == "e"))
                {
                  nilaimahasiswa = 0;
                }
      return nilaimahasiswa;

    }



    void gotoxy (int x, int y ) // Koordinat Tabel
    {
          COORD coord;
          coord.X = x;
          coord.Y = y;
          SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
    }

int main()
    {


      for (int i = 5; i <=7; i++)
      {
        cout << "Masukkan nilai "  << i+1 << ": ";
        cin >> nilaiabcde[i];
      }

      for(int a = 0; a <= 7; a++)
      {
          nilai = tabelnilai(nilaiabcde[a]);
          luarannilaiabcde[a]=nilai;
      }

        system("cls");
        gotoxy(15,1); cout << "#######################################################################################" << endl;
        gotoxy(15,2); cout << "#    #                            #       #                         #                 #" << endl;
        gotoxy(15,3); cout << "#######################################################################################" << endl;
        gotoxy(15,4); cout << "#    #                            #       #                         #                 #" << endl;
        gotoxy(15,5); cout << "#    #                            #       #                         #                 #" << endl;
        gotoxy(15,6); cout << "#    #                            #       #                         #                 #" << endl;
        gotoxy(15,7); cout << "#    #                            #       #                         #                 #" << endl;
        gotoxy(15,8); cout << "#    #                            #       #                         #                 #" << endl;
        gotoxy(15,9); cout << "#    #                            #       #                         #                 #" << endl;
        gotoxy(15,10); cout << "#    #                            #       #                         #                 #" << endl;
        gotoxy(15,11); cout << "#    #                            #       #                         #                 #" << endl;
        gotoxy(15,12); cout << "#######################################################################################" << endl;
        gotoxy(15,13); cout << "#                                                                   #                 #" << endl;
        gotoxy(15,14); cout << "#######################################################################################" << endl;


        for (int i = 0; i <= 7; i++)
        {
          gotoxy(71,4+i);cout << nilaiabcde[i] << endl;

          perkalianpersatuan[i] = luarannilaiabcde[i] * sks [i];
          gotoxy(91,4+i);cout << perkalianpersatuan[i] << endl;
          totalnilai += perkalianpersatuan[i];
          totalsks += sks[i];

              if ((nilaiabcde[i] == "A") || (nilaiabcde[i] == "a")) // Jumlah banyaknya nilai A
                    {
                      a += 1;
                    }
              else if ((nilaiabcde[i] == "C") || (nilaiabcde[i] == "c")) // Jumlah banyaknya nilai C
                    {
                      c += 1;
                    }
        }



        ipk = totalnilai / totalsks;



        // Judul
        gotoxy(17,2); cout << "No" << endl;
        gotoxy(29,2); cout << "Mata Kuliah " << endl;
        gotoxy(52,2); cout << "SKS" << endl;
        gotoxy(62,2); cout << "Nilai (Dalam Huruf)" << endl;
        gotoxy(87,2); cout << "SKS * Nilai" << endl;

        // Isi
        gotoxy(17,4); cout << "1" << endl;
        gotoxy(29,4); cout << " Robotika I " << endl;
        gotoxy(53,4); cout << "3" << endl;

        gotoxy(17,5); cout << "2" << endl;
        gotoxy(28,5); cout << "Mikrokontroler" << endl;
        gotoxy(53,5); cout << "4" << endl;

        gotoxy(17,6); cout << "3" << endl;
        gotoxy(24,6); cout << "Algoritma Pemrograman" << endl;
        gotoxy(53,6); cout << "4" << endl;
        gotoxy(17,7); cout << "4" << endl;
        gotoxy(29,7); cout << "Basis Data" << endl;
        gotoxy(53,7); cout << "3" << endl;

        gotoxy(17,8); cout << "5" << endl;
        gotoxy(28,8); cout << "Struktur data" << endl;
        gotoxy(53,8); cout << "2" << endl;

        gotoxy(17,9); cout << "6" << endl;
        gotoxy(29,9); cout << "Interfacing" << endl;
        gotoxy(53,9); cout << "3" << endl;

        gotoxy(17,10); cout << "7" << endl;
        gotoxy(24,10); cout << "Sensor dan Tranduser" << endl;
        gotoxy(53,10); cout << "3" << endl;

        gotoxy(17,11); cout << "8" << endl;
        gotoxy(29,11); cout << "Mekatronika" << endl;
        gotoxy(53,11); cout << "4" << endl;

        gotoxy(65,13); cout << "TOTAL SKS * Nilai " << endl;
        gotoxy(91,13); cout << totalnilai << endl;

        gotoxy(15,15); cout << "Nilai IPK : " << ipk << endl;
        gotoxy(15,16); cout << "Jumlah Matkul yang mendapat nilai A : " << a << endl;
        gotoxy(15,17); cout << "Jumlah Matkul yang mendapat nilai C : " << c << endl;

        return 0;
    }
