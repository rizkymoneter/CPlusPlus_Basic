#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <math.h>
#include <windows.h>

using namespace std;

void gotoxy (int x, int y ){
COORD coord;
coord.X = x;
coord.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

int idgenap, idganjil, p;
int genap,ganjil,lebihdari65;
int jumlah , jumlahgenap = 0 ,jumlahganjil = 0, jumlah65 = 0, jumlahidgenap = 0, jumlahidganjil = 0;
float ratarata = 0, totalnilai = 0 , rataratagenap = 0 , ratarataganjil = 0 , ratarata65 = 0 , ratarataidgenap = 0, ratarataidganjil = 0;



int main() {

  gotoxy(50,1); cout << "############################" << endl;
  gotoxy(50,2); cout << "#  ID ANAK  # NILAI  UJIAN #" << endl;
  gotoxy(50,3); cout << "############################" << endl;
  gotoxy(50,4); cout << "#     1     #      65      #" << endl;
  gotoxy(50,5); cout << "#     2     #      65      #" << endl;
  gotoxy(50,6); cout << "#     3     #      70      #" << endl;
  gotoxy(50,7); cout << "#     4     #      95      #" << endl;
  gotoxy(50,8); cout << "#     5     #      70      #" << endl;
  gotoxy(50,9); cout << "#     6     #      34      #" << endl;
  gotoxy(50,10); cout << "#     7     #      80      #" << endl;
  gotoxy(50,11); cout << "#     8     #      95      #" << endl;
  gotoxy(50,12); cout << "#     9     #      23      #" << endl;
  gotoxy(50,13); cout << "#     10    #      56      #" << endl;
  gotoxy(50,14); cout << "#     11    #      98      #" << endl;
  gotoxy(50,15); cout << "#     12    #      100     #" << endl;
  gotoxy(50,16); cout << "#     13    #      34      #" << endl;
  gotoxy(50,17); cout << "#     14    #      55      #" << endl;
  gotoxy(50,18); cout << "#     15    #      82      #" << endl;
  gotoxy(50,19); cout << "#     16    #      81      #" << endl;
  gotoxy(50,20); cout << "#     17    #      56      #" << endl;
  gotoxy(50,21); cout << "#     18    #      45      #" << endl;
  gotoxy(50,22); cout << "#     19    #      33      #" << endl;
  gotoxy(50,23); cout << "#     20    #      100     #" << endl;
  gotoxy(50,24); cout << "############################" << endl;



  cout << "Masukkan jumlah murid : " ;
  cin >> jumlah;

  int idanak[jumlah];   // ini untuk array
  float * genap = new float [jumlah]; // ini untuk array genap
  float * ganjil = new float [jumlah]; // ini untuk array ganjil
  float * lebihdari65 = new float [jumlah];// ini untuk array lebih dari 65

  for (int i = 0; i < jumlah ; i++)
  {
      cout << "Masukan Nilai ke-" << i+1 << " : " ;
      cin >>  idanak[i];
      ratarata = ratarata + idanak[i];

  }

  for (int i = 0; i < jumlah ; i++)
  {
    if (idanak[i] % 2 == 0)
    {
      genap[i] = idanak[i];
      rataratagenap = rataratagenap + genap[i] ;
      jumlahgenap += 1;
    }
    if (idanak[i] % 2 == 1)
    {
      ganjil[i] = idanak[i];
      ratarataganjil = ratarataganjil + ganjil[i] ;
      jumlahganjil += 1;
    }
    if (idanak[i] >= 65)
    {
      lebihdari65[i] = idanak[i];
      ratarata65 = ratarata65 + lebihdari65[i];
      jumlah65 += 1;
    }


  }

// untuk ID

  for (int idgenap = 1;  idgenap < jumlah; idgenap=idgenap+2) // looping untung mengetahui jumlah anak ber ID genap
  {
      ratarataidgenap = ratarataidgenap + idanak[idgenap] ; // menghitung jumlah nilai total ID genap
      jumlahidgenap += 1; // menhitung jumlah ID yang genap
  }

  for (int idganjil = 0;  idganjil < jumlah; idganjil=idganjil+2) // looping untung mengetahui jumlah anak ber ID ganjil
  {
      ratarataidganjil = ratarataidganjil + idanak[idganjil] ; // menghitung jumlah nilai total ID ganjil
      jumlahidganjil += 1;  // menhitung jumlah ID yang genap
  }



      cout << "" << endl;
      cout << "Rata-rata : " << ratarata/jumlah << endl;
      cout << "Rata-rata Nilai Genap : " << rataratagenap/jumlahgenap << endl;
      cout << "Rata-rata Nilai Ganjil : " << ratarataganjil/jumlahganjil << endl;
      cout << "Rata-rata Nilai Lebih dari 65 : " << ratarata65/jumlah65 << endl;
      cout << "Rata-rata ID Genap : " << ratarataidgenap/jumlahidgenap << endl;
      cout << "Rata-rata ID Ganjil : " << ratarataidganjil/jumlahidganjil << endl;
      cout << "Jumlah Anak Yang Nilainya Lebih dari 65 : " << jumlah65 << endl;
      cout << "" << endl;


  for (int i = 0; i <= jumlah; i++) // untuk menampilkan ID anak yang memiliki nilai lebih dari 65
  {
    if (idanak[i] >= 65)
    {
      cout << "Anak Ke-" << i+1 << endl;
    }
  }



  return 0;
}
