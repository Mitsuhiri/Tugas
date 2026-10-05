#include<iostream>
using namespace std;

void inputHarga(int harga[], int jumlahJenis[],int &hargaJenis, int &total, int jumlah){
    for(int i = 0; i < jumlah; i++){
        cout << "Masukan Harga Barang ke-" << i + 1 << " : ";
        cin >> harga[i];
        cout << "Masukan Jumlah Barang ke-" << i + 1 << " : ";
        cin >> jumlahJenis[i];
        cout << "\n";
        hargaJenis = harga[i] * jumlahJenis[i];
        total = total + hargaJenis;
    }
}

int HargaDiskon(int total){
    if(total < 100000){
        return total;
    } else if(total < 250000){
        return total = total - (total * 0.05);
    }
    return total = total - (total * 0.10);
}

int main(){
    int jumlah;
    int hargaJenis;
    int total = 0;
    int diskon = 0;

    cout << "Masukan Jumlah Jenis Barang : ";
    cin >> jumlah;
    cout << "\n";

    int harga[jumlah];
    int jumlahJenis[jumlah];

    inputHarga(harga, jumlahJenis, hargaJenis, total, jumlah);

    cout << "=== Hasil Belanja ===\n";
    cout << "Total Belanja  : " << total << "\n";
    cout << "Diskon         : " << total - HargaDiskon(total) << "\n";
    cout << "Total Harga    : " << HargaDiskon(total);

    return 0;
}