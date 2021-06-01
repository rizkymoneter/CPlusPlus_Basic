#include <conio.h>
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <windows.h>


using namespace std;

COORD coord={0,0};//mendapatkan koordinat
void gotoxy(int x,int y){//fungsi atau method yang digunakan untuk mendefinisikan fungsi gotoxy, dengan terdapat argument x dan y bertipedata integer
    coord.X=x;//lalu untuk coord X di definisikan dengan argument x
    coord.Y=y;// dan coord Y di definisikan dengan argumen y
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

class Hitungan{//membuat class dengan nama hitungan
    private://pendeklarasiaan variable dalam private (karena hanya akan diakses dalam satu class saja)
        int no,b,harga[10],banyak[10];//pendeklarasian variabel dengan tipe data int no,b,harga(array),banyak(array)
        string nama,pesan[10],pilihpesanan[10],namapesanan[40];//pendeklarasian variabel dengan tipe data string (karena untuk menampilkan output dengan banyak karakter)
        float banyaktotal[10],kembalian,diskon,hargaakhir,bayar,total;//pendeklarasian variabel dengan tipe data float
    public://dari sini di set ke Public karena nantinya akan dipanggil di main class atau int main
        void Menu(){//membuat method atau fungsi dengan nama Menu
            system("cls");//system("cls") sama dengan perintah clsr atau clear screen (digunakan untuk membersihkan layar)
            cout<<"                     Program Jualan Ayam Goreng"<<endl;
            cout<<"                           Ayam Goreng"<<endl;
            cout<<"=*********************************************************************="<<endl;
            cout<<"No.Pesan                     : ";
            cin>>no;//masukkan nomor pesanan
            cout<<"Nama Pemesanan               : ";
            cin>>nama;//masukkan nama pemesan
            cout<<"Banyak Porsi                 : ";
            cin>>b;//masukkan banyak porsi (juga sebagai batas dari perulangan atau looping)
        }
        void Pesan(){//membuat method atau fungsi kedua dengan nama Pesan
            system("cls");
            for(int i=0;i<b;i++){//perulangan pertama dengan i=0,i<b (porsi) maka akan mengulangi proses sebanyak pori atau b
                cout<<"Pesanan ke - "<<i+1<<endl;
                cout<<"1. Dada"<<endl<<"2. Paha"<<endl<<"3. Sayap"<<endl<<"4. Kepala"<<endl<<"5. Ceker"<<endl;
                cout<<"Masukkan Kode (DD/PP/SS/KK/CC) : ";
                cin>>pilihpesanan[i];//memilih pesanan dengan ditampung oleh variabel pilihpesanan (string array)
                cout<<"Banyak Ayam                    : ";
                cin>>banyak[i];//memasukkan banyak ayam yang akan di beli dengan ditampung oleh variabel banyak (int array)

                if((pilihpesanan[i] == "DD") || (pilihpesanan[i] == "dd")){//melakukan perulangan jika masukan adalah DD (huruf besar) atau dd (huruf kecil) --> || = or --> Operator Logika
                    namapesanan[i] = "Dada Ayam";//lalu memasukkan data dengan nama Dada Ayam jika masukan adalah DD atau dd yang ditampung oleh variabel namapesanan(string array)
                    harga[i] = 20000;//dan memberi harga 20000 yang ditampung oleh variael harga(int array)
                }else if((pilihpesanan[i] == "PP") || (pilihpesanan[i] == "pp")){//sama dengan DD
                    namapesanan[i] = "Paha Ayam";//sama dengan DD
                    harga[i] = 18000;//sama dengan DD
                }else if((pilihpesanan[i] == "SS") || (pilihpesanan[i] == "ss")){//sama dengan DD
                    namapesanan[i] = "Sayap Ayam";//sama dengan DD
                    harga[i] = 18000;//sama dengan DD
                }else if((pilihpesanan[i] == "KK") || (pilihpesanan[i] == "kk")){//sama dengan DD
                    namapesanan[i] = "Kepala Ayam";//sama dengan DD
                    harga[i] = 10000;//sama dengan DD
                }else if((pilihpesanan[i] == "CC") || (pilihpesanan[i] == "cc")){//sama dengan DD
                    namapesanan[i] = "Ceker Ayam";//sama dengan DD
                    harga[i] = 10000;// sama dengan DD
                }
                cout<<endl;
            }
        }
        void Totalan(){//terakhir membuat method atau fungsi dengan nama Totalan
            total =0;
            system("cls");
            cout<<"                          Cetak Pemesanan                              "<<endl;
            cout<<"                       Ayam Mahasiswa Kreatif                          "<<endl;
            cout<<"=*********************************************************************="<<endl;
            cout<<"No.Pesan      : "<<no<<endl;//diambil dari inputan nomor pesanan
            cout<<"Nama Pemesan  : "<<nama<<endl;//diambil dari inputan nama pemesan
            cout<<"======================================================================="<<endl;
            cout<<"No.       Jenis          Harga        Banyak      Total                "<<endl;
            cout<<"          Porsi          Per Porsi    Porsi       Harga                "<<endl;
            cout<<"======================================================================="<<endl;
            for(int i=0;i<b;i++){//untuk mengambil hasil dari inputan diatas kita memerlukan for atau perulangan yang kedua dengan batas adalah sama dengan b atau porsi
                gotoxy(1,i+10);  cout<<i+1;//menampilkan nomor
                gotoxy(10,i+10);  cout<<namapesanan[i];//menampilkan nama pesanan
                gotoxy(25,i+10); cout<<harga[i];//menampilkan harga
                gotoxy(39,i+10); cout<<banyak[i];//menampilkan banyak ayam
                banyaktotal[i]=harga[i]*banyak[i];//menghitung harga dari banyak ayam tiap porsi misal : dalam satu porsi ada 3 potong dada jadi 3 x 20000 = 60000
                gotoxy(50,i+10); cout<<banyaktotal[i];//menampilkan hasil dari banyak tootal diatas
                cout<<endl;
                total=total+banyaktotal[i];//menghitung total dari semua pesanan
            }
            cout<<"======================================================================="<<endl;
            diskon = 0.3*total;//perhitungan diskon 30%
            hargaakhir=total-diskon;//perhitungan harga apa bila mendapat diskon
            cout<<"                                Total Harga     :Rp. "<<total<<endl;//menampilkan total semua pesanan
            if(total>300000){//kondisi, jika memlakukan pembelian dengan lebih dari 300000 (tigaratus ribu) maka mendapat diskon 30% dari total harga
                cout<<"                                Diskon 30%      :Rp. "<<diskon<<endl;//menampilkan diskon dari perhitungan diskon
                cout<<"                                Harga Bayar     :Rp. "<<hargaakhir<<endl;//menampilkan harga akhir setelah mengurangi total harga dan diskon
                cout<<"                                Uang Bayar      :Rp. ";cin>>bayar;//memaukkan nominal pembayaran
                kembalian=bayar-hargaakhir;//menghitung kembalian = bayar - harga akhir setelah mendapat diskon
            }else{//jika tidak memenuhi syarat diatas atau pembelian kurang dari 300000 atau tiga ratus ribu
                cout<<"                                Diskon 0%       :Rp. "<<endl;//diskon = 0% atau tidak mendapatkan diskon
                cout<<"                                Harga Bayar     :Rp. "<<total<<endl;//menampilkan total semua pesanana
                cout<<"                                Uang Bayar      :Rp. ";cin>>bayar;//memaskkan nominl pembayaran
                kembalian=bayar-total;//karena tidak dapat diskon maka kembalian adalah bayar-total (anpa diskon)
            }
            cout<<"                                Uang Kembali    :Rp. "<<kembalian<<endl;//menampilkan kembalian

        }
};

int main()
{
    Hitungan hitung;//untuk memanggil class atau sub program diatas pertama membuat object dengan (nama class)(nama object), nama object bisa terserah, nama class sesuaikan dengan nama class
    hitung.Menu();//memanggil method Menu
    hitung.Pesan();//memanggil method Pesan
    hitung.Totalan();//memanggil method Totalan

}
