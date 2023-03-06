/*
Nama Program  : bulan.c
Deskripsi     : program ini melakukan konversi dari angka ke nama bulan
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
    scanf("%d", &bilangan);

    if (bilangan >=1 && bilangan <=12 )
        if (bilangan == 1){
            printf("Januari");
        }
        else if (bilangan == 2){
            printf("Februari");
        }
        else if (bilangan == 3){
            printf("Maret");
        }
        else if (bilangan == 4){
            printf("April");
        }
        else if (bilangan == 5){
            printf("Mei");
        }
        else if (bilangan == 6){
            printf("Juni");
        }
        else if (bilangan == 7){
            printf("Juli");
        }
        else if (bilangan == 8){
            printf("Agustus");
        }
        else if (bilangan == 9){
            printf("September");
        }
        else if (bilangan == 10){
            printf("Oktober");
        }
        else if (bilangan == 11){
            printf("November");
        }
        else {
            printf("Desember");
    }
    else {
        printf("masukan nomor nomor bulan tidak tepat");
    }
    return 0;
}

