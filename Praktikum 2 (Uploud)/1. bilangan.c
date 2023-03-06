/*
Nama Program  : bilangan.c
Deskripsi     : program ini menentukan jenis bilangan
Nama Pembuat  : Wahidatuzzahro Febria Fithrurrahmah
NIM           : 24060122120008
Tanggal       : 6 Maret 2023
*/

#include <stdio.h>

int main(void){

    //Kamus Lokal
    int bilangan;

    //Algoritma
    printf("Masukkan bilangan ");

    if(scanf("%d", &bilangan))
        if (bilangan > 0){
            printf("bilangan bulat positif");
        }
        else if (bilangan == 0){
            printf("bilangan nol");
        }
        else{
            printf("bilangan bulat negatif");
        }
    else {
        printf("bukan termasuk sebuah bilangan");
    }
    return 0;
}
