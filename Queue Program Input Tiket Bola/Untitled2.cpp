#include <iostream>
#include<conio.h>
#include<stdlib.h>

#define MAX_SIZE 100

using namespace std;

    struct master_pilihan1
    {
        string notiket[15];
        string nama[25];
        string pertandingan[50];
        string jumlah[10];
        string totalharga[10];
    }pilihan1;

int main() {
    int item, choice, i;
    int arr_queue[MAX_SIZE];
    int rear = 0;
    int front = 0;
    int exit = 1;

    cout << "\nAntrian Membuat SIM";
    do {
        cout << "\n\nMenu Utama Antrian";

        cout << "\n1.Memasukkan \n2.Menampilkan";
        cout << "\nMasukkan Pilihan Anda : ";
        cin>>choice;
        switch (choice) {
            case 1:
                if (rear == MAX_SIZE)
                    cout << "\n## Antrian Tercapai Maks!!";
                else {
                    cout << "\nMasukkan ID : ";
                    cin>>item;
                    cout << "Inputkan No Tiket : "; cin >> pilihan1.notiket[i];
                    cout << "Inputkan Nama : "; cin >> pilihan1.nama[i];
                    cout << "Inputkan Pertandingan : "; cin >> pilihan1.pertandingan[i];
                    cout << "Inputkan Jumlah Tiket : "; cin >> pilihan1.jumlah[i];
                    cout << "Inputkan Total Harga : "; cin >> pilihan1.totalharga[i];

                    cout << "\n## ID Antrian: " << rear + 1 << endl;
                    cout << "------------------------------------" << endl;
                    cout << "No Tiket : " << pilihan1.notiket[i] << endl;
                    cout << "Nama : " << pilihan1.nama[i] << endl;
                    cout << "Pertandingan : " << pilihan1.pertandingan[i] << endl;
                    cout << "Jumlah Tiket : " << pilihan1.jumlah[i] << endl;
                    cout << "Total Harga : " << pilihan1.totalharga[i] << endl;

                    arr_queue[rear++] = item;
                }
                break;
            case 2:
                cout << "\n## Banyak Antrian : " << (rear - front) << endl;;
                cout << "###########################################################" << endl;
                for (i = front; i < rear; i++)
                    cout << "\n## Antrian : " << i+1 << "\nNilai  : " << arr_queue[i] << "\nNo Tiket : " << pilihan1.notiket[i] << "\nNama : " << pilihan1.nama[i] << "\nPertandingan : " << pilihan1.pertandingan[i] << "\nJumlah Tiket : " << pilihan1.jumlah[i] << "\nTotal Harga : " << pilihan1.totalharga[i] << endl;
                break;
            default:
                exit = 0;
                break;
        }
    }
    while (exit);

    return 0;
}
