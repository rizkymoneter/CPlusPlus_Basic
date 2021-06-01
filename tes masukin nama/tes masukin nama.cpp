#include <iostream>

using namespace std;

int main()
{
    string nama;
    int jurusan;
    cout<<"Masukkan nama mahasiswa = ";
    cin>>nama;
    cout<<"Masukkan kode jurusan = ";
    cin>>jurusan;

    if(jurusan == 14){
        cout<<"Nama Mahasiswa = "<<nama<<endl;
        cout<<"Kode Jurusan   = "<<jurusan<<endl;
        cout<<"Nama Jurusan   = Sistem Komputer";
    } else {
        cout<<"misal salah";
    }
}
