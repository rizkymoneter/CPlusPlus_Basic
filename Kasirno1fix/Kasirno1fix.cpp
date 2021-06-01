#include <iostream>
#include <conio.h>
#include <windows.h> // Mendeklarasikan library "windows.h"
                     // untuk mengakses fungsi gotoxy
using namespace std;

void gotoxy (int x, int y ){
COORD coord; // Mendeklarasikan kordinat
coord.X = x;
coord.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

int main()
{
  string text;
  int id,motorservo,mikro,sensorj,sensors,diskon,harga,harga1,harga2,selisih,hargadiskon,total1,total2,total3,total4,hargatotal,uang,pembayaran,qty1,qty2,qty3,qty4;
  char pelanggan,tanda;

  gotoxy(50,1); cout << "####################################" << endl;
  gotoxy(50,2); cout << "#      HARGA BARANG DAN DISKON     #" << endl;
  gotoxy(50,3); cout << "####################################" << endl;
  gotoxy(25,4); cout << "########################################################################################" << endl;
  gotoxy(25,5); cout << "# NO #   NAMA BARANG   #   PELANGGAN TETAP (P)   #   KOSUMEN UMUM (U)  #     HARGA     #" << endl;
  gotoxy(25,6); cout << "########################################################################################" << endl;
  gotoxy(25,7); cout << "# 1 #    Motor Servo   #       10% / 5 item      #     5% / 5 item     #    35.000,-   #" << endl;
  gotoxy(25,8); cout << "# 2 #  Mikro Kontroler #       10% / 10 item     #     10% / 15 item   #    50.000,-   #" << endl;
  gotoxy(25,9); cout << "# 3 #   Sensor Jarak   #       10% / 5 item      #     5% / 10 item    #    30.000,-   #" << endl;
  gotoxy(25,10); cout << "# 5 #   Sensor Suara   #       20% / 10 item     #     10% / 10 item   #    45.000,-   #" << endl;
  gotoxy(25,11); cout << "########################################################################################" << endl;

  cout << "\n" ;

  gotoxy(25,13); cout << "################################" << endl;
  gotoxy(25,14); cout << "  Masukkan pelanggan (p/u) :  " ;
  cin >> pelanggan;
  gotoxy(25,15); cout << "################################";

  // getch();
  // goto awal;

if ((pelanggan =='P')||(pelanggan =='p'))
{

    gotoxy(25,16); cout << "############################################";
    gotoxy(25,17); cout << "#               BARANG             #   ID  #" << endl;
    gotoxy(25,18); cout << "############################################";
    gotoxy(25,19); cout << "#             Motor Servo          #   1   #" << endl;
    gotoxy(25,20); cout << "#           Mikro Kontroler        #   2   #" << endl;
    gotoxy(25,21); cout << "#            Sensor Jarak          #   3   #" << endl;
    gotoxy(25,22); cout << "#            Sensor Suara          #   4   #" << endl;
    gotoxy(25,23); cout << "############################################";
    gotoxy(25,24); cout << "  Masukkan ID barang yang akan dibeli :  " ;
    cin >> id;

    if (id == 1)
    {

      gotoxy(25,27); cout << "#####################################";
      gotoxy(25,28); cout << "#             Motor Servo           #" << endl ;
      gotoxy(25,29); cout << "          Masukkan Jumlah : ";
      cin >> motorservo;
      qty1 = motorservo;
      harga = 35000;
      harga1 = motorservo * harga;
      selisih = motorservo % 5;
      diskon = (motorservo - selisih) * harga * 10 / 100;
      hargadiskon = ((motorservo - selisih) * harga) - diskon;
      harga2 = selisih * harga;
      total1 = hargadiskon + harga2;
      gotoxy(25,30); cout << "    Total Harga Adalah : Rp." << total1 << '\n';
      gotoxy(25,31); cout << "###################################";
      gotoxy(25,32); cout << "      Ingin Membeli Barang Lain?   ";
      gotoxy(25,33); cout << "         Ketik Y untuk Lanjut      ";
                    cin  >> tanda;
                    if ((tanda=='Y')||(tanda=='y'))
                    {
                      goto menu2p;
                    }

                    else
                    {
                      goto menutotalp;
                    }


    }



      else if (id == 2)
      {
        menu2p:
        gotoxy(25,36); cout << "#####################################";
        gotoxy(25,37); cout << "#           Mikro Kontroler         #" << endl ;
        gotoxy(25,38); cout << "          Masukkan Jumlah : ";
        cin >> mikro;
        qty2 = mikro;
        harga = 50000;
        harga1 = mikro * harga;
        selisih = mikro % 10;
        diskon = (mikro - selisih) * harga * 10 / 100;
        hargadiskon = ((mikro - selisih) * harga) - diskon;
        harga2 = selisih * harga;
        total2 = hargadiskon + harga2;
        gotoxy(25,39); cout << "    Total Harga Adalah : Rp." << total2 << '\n';
        gotoxy(25,41); cout << "###################################";
        gotoxy(25,42); cout << "      Ingin Membeli Barang Lain?   ";
        gotoxy(25,43); cout << "         Ketik Y untuk Lanjut      ";
                      cin  >> tanda;
                      if ((tanda=='Y')||(tanda=='y'))
                      {
                        goto menu3p;
                      }

                      else
                      {
                        goto menutotalp;
                      }


      }


      else if (id == 3)
      {
        menu3p:
        gotoxy(25,45); cout << "#####################################";
        gotoxy(25,46); cout << "#            Sensor Jarak           #" << endl ;
        gotoxy(25,47); cout << "          Masukkan Jumlah : ";
        cin >> sensorj;
        qty3 = sensorj;
        harga = 30000;
        harga1 = sensorj * harga;
        selisih = sensorj % 5;
        diskon = (sensorj - selisih) * harga * 10 / 100;
        hargadiskon = ((sensorj - selisih) * harga) - diskon;
        harga2 = selisih * harga;
        total3 = hargadiskon + harga2;

        gotoxy(25,48); cout << "    Total Harga Adalah : Rp." << total3 << '\n';
        gotoxy(25,50); cout << "###################################";
        gotoxy(25,51); cout << "      Ingin Membeli Barang Lain?   ";
        gotoxy(25,52); cout << "         Ketik Y untuk Lanjut      ";
                      cin  >> tanda;
                      if ((tanda=='Y')||(tanda=='y'))
                      {
                        goto menu4p;
                      }

                      else
                      {
                        goto menutotalp;
                      }


      }


      else if (id == 4)
      {
        menu4p:
        gotoxy(25,54); cout << "#####################################";
        gotoxy(25,55); cout << "#             Sensor Suara           #" << endl ;
        gotoxy(25,56); cout << "          Masukkan Jumlah : ";
        cin >> sensors;
        qty4 = sensors;
        harga = 45000;
        harga1 = sensors * harga;
        selisih = sensors % 10;
        diskon = (sensors - selisih) * harga * 20 / 100;
        hargadiskon = ((sensors - selisih) * harga) - diskon;
        harga2 = selisih * harga;
        total4 = hargadiskon + harga2;
        gotoxy(25,57); cout << "    Total Harga Adalah : Rp." << total4 << '\n';
        gotoxy(25,59); cout << "###################################";
        goto menutotalp;


      }
      else
      {
        gotoxy(25,27); cout << "###################################";
        gotoxy(25,28); cout << "#           Maaf ID Salah         #" << endl ;
        gotoxy(25,29); cout << "###################################";
      }
    }







else if ((pelanggan =='U')||(pelanggan =='u'))
{

      gotoxy(25,16); cout << "############################################";
      gotoxy(25,17); cout << "#               BARANG             #   ID  #" << endl;
      gotoxy(25,18); cout << "############################################";
      gotoxy(25,19); cout << "#             Motor Servo          #   1   #" << endl;
      gotoxy(25,20); cout << "#           Mikro Kontroler        #   2   #" << endl;
      gotoxy(25,21); cout << "#            Sensor Jarak          #   3   #" << endl;
      gotoxy(25,22); cout << "#            Sensor Suara          #   4   #" << endl;
      gotoxy(25,23); cout << "############################################";
      gotoxy(25,24); cout << "  Masukkan ID barang yang akan dibeli :  " ;
      cin >> id;

      if (id == 1)
      {
        gotoxy(25,27); cout << "#####################################";
        gotoxy(25,28); cout << "#             Motor Servo           #" << endl ;
        gotoxy(25,29); cout << "          Masukkan Jumlah : ";
        cin >> motorservo;
        harga = 35000;
        harga1 = motorservo * harga;
        selisih = motorservo % 5;
        diskon = (motorservo - selisih) * harga * 5 / 100;
        hargadiskon = ((motorservo - selisih) * harga) - diskon;
        harga2 = selisih * harga;
        total1 = hargadiskon + harga2;
        gotoxy(25,30); cout << "    Total Harga Adalah : Rp." << total1 << '\n';
        gotoxy(25,31); cout << "###################################";
        gotoxy(25,32); cout << "      Ingin Membeli Barang Lain?   ";
        gotoxy(25,33); cout << "         Ketik Y untuk Lanjut      ";
                      cin  >> tanda;
                      if ((tanda=='Y')||(tanda=='y'))
                      {
                        goto menu2u;
                      }

                      else
                      {
                        goto menutotalu;
                      }


      }



        else if (id == 2)
        {
          menu2u:
          gotoxy(25,36); cout << "#####################################";
          gotoxy(25,37); cout << "#           Mikro Kontroler         #" << endl ;
          gotoxy(25,38); cout << "          Masukkan Jumlah : ";
          cin >> mikro;
          harga = 50000;
          harga1 = mikro * harga;
          selisih = mikro % 15;
          diskon = (mikro - selisih) * harga * 10 / 100;
          hargadiskon = ((mikro - selisih) * harga) - diskon;
          harga2 = selisih * harga;
          total2 = hargadiskon + harga2;
          gotoxy(25,39); cout << "    Total Harga Adalah : Rp." << total2 << '\n';
          gotoxy(25,41); cout << "###################################";
          gotoxy(25,42); cout << "      Ingin Membeli Barang Lain?   ";
          gotoxy(25,43); cout << "         Ketik Y untuk Lanjut      ";
                        cin  >> tanda;
                        if ((tanda=='Y')||(tanda=='y'))
                        {
                          goto menu3u;
                        }

                        else
                        {
                          goto menutotalu;
                        }


        }


        else if (id == 3)
        {
          menu3u:
          gotoxy(25,45); cout << "#####################################";
          gotoxy(25,46); cout << "#            Sensor Jarak           #" << endl ;
          gotoxy(25,47); cout << "          Masukkan Jumlah : ";
          cin >> sensorj;
          harga = 30000;
          harga1 = sensorj * harga;
          selisih = sensorj % 10;
          diskon = (sensorj - selisih) * harga * 5 / 100;
          hargadiskon = ((sensorj - selisih) * harga) - diskon;
          harga2 = selisih * harga;
          total3 = hargadiskon + harga2;
          gotoxy(25,48); cout << "    Total Harga Adalah : Rp." << total3 << '\n';
          gotoxy(25,50); cout << "###################################";
          gotoxy(25,51); cout << "      Ingin Membeli Barang Lain?   ";
          gotoxy(25,52); cout << "         Ketik Y untuk Lanjut      ";
                        cin  >> tanda;
                        if ((tanda=='Y')||(tanda=='y'))
                        {
                          goto menu4u;
                        }

                        else
                        {
                          goto menutotalu;
                        }


        }


        else if (id == 4)
        {
          menu4u:
          gotoxy(25,54); cout << "#####################################";
          gotoxy(25,55); cout << "#             Sensor Suara           #" << endl ;
          gotoxy(25,56); cout << "          Masukkan Jumlah : ";
          cin >> sensors;
          harga = 45000;
          harga1 = sensors * harga;
          selisih = sensors % 10;
          diskon = (sensors - selisih) * harga * 10 / 100;
          hargadiskon = ((sensors - selisih) * harga) - diskon;
          harga2 = selisih * harga;
          total4 = hargadiskon + harga2;
          gotoxy(25,57); cout << "    Total Harga Adalah : Rp." << total4 << '\n';
          gotoxy(25,59); cout << "###################################";
          goto menutotalu;


        }
        else
        {
          gotoxy(25,27); cout << "###################################";
          gotoxy(25,28); cout << "#           Maaf ID Salah         #" << endl ;
          gotoxy(25,29); cout << "###################################";
        }
      }



else
{
  gotoxy(25,16); cout << "################################";
  gotoxy(25,17); cout << "#     Maaf anda salah input    #";
  gotoxy(25,18); cout << "################################";
}

  menutotalp:
  hargatotal = total1 + total2 + total3 + total4;

  menutotalu:
  hargatotal = total1 + total2 + total3 + total4;





gotoxy(25,64); cout << "#######################################################" << endl;
gotoxy(25,65); cout << "#                HARGA YANG PERLU DI BAYAR           #" << endl;
gotoxy(25,66); cout << "#######################################################" << endl;
gotoxy(25,67); cout << "#######################################################" << endl;
gotoxy(25,68); cout << "# NO #   NAMA BARANG   #    Jumlah    #     HARGA           " << endl;
gotoxy(25,69); cout << "#######################################################" << endl;
gotoxy(25,70); cout << "# 1 #    Motor Servo   #   "<< qty1 <<"     #   Rp." << total1 << ",-   " << endl;
gotoxy(25,71); cout << "# 2 #  Mikro Kontroler #   "<< qty2 <<"     #   Rp." << total2 << ",-   " << endl;
gotoxy(25,72); cout << "# 3 #   Sensor Jarak   #   "<< qty3 <<"     #   Rp." << total3 << ",-   " << endl;
gotoxy(25,73); cout << "# 4 #   Sensor Suara   #   "<< qty4 <<"     #    Rp." << total4 << ",-   " << endl;
gotoxy(25,74); cout << "#######################################################" << endl;
gotoxy(25,75); cout << "                               Total  #    Rp" << hargatotal << ",-  " << endl;
gotoxy(25,76); cout << "#######################################################" << endl;
gotoxy(25,77); cout << "                          Pembayaran  #    Rp"; cin >> uang;cout << ",-" << endl;
pembayaran = uang - hargatotal;
gotoxy(25,78); cout << "                           Kembalian  #    Rp" << pembayaran << ",-    " << endl;







  return 0;
}
