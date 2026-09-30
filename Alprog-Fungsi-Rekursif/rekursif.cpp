/*
Muhammad Fahmi Algifari
140810260088
5 Fungsi Rekursif
28/09/2026
*/

#include<iostream>
using namespace std;

int Pangkat(int angka, int pangkatnya){
    if(pangkatnya == 0){
        return 1;
    }
    return angka * Pangkat(angka, pangkatnya - 1);
}

int Faktorial(int n){
    if(n == 0){
        return 1;
    }
    return n * Faktorial(n - 1);
}

int JumlahKe_n(int n){
    if(n == 0){
        return 0;
    }
    return n + JumlahKe_n(n - 1);
}

int Fibonacci(int n){
    if(n <= 1){
        return n;
    }
    return Fibonacci(n - 1) + Fibonacci(n - 2);
}

void BalikKata(string kata, int jumlahKata){
    if(jumlahKata < 0){
        return;
    }
    cout << kata[jumlahKata];
    BalikKata(kata, jumlahKata - 1);
}

int main(){
    cout << Pangkat(2, 3) << "\n"; // 1
    cout << Faktorial(5) << "\n"; // 2
    cout << JumlahKe_n(6) << "\n"; // 3
    int n = 7;
    for(int i = 0; i <= n; i++){
        cout << Fibonacci(i) << ", "; // 4
    }   
    cout << "\n";
    string kata = "KAMUHITAM";
    BalikKata(kata, kata.length() - 1); // 5

    return 0;
}