/*
Nama Program  : hari.c
Deskripsi     : program ini melakukan konversi angka ke nama hari
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

    if (bilangan >=1 && bilangan <=7)
        if (bilangan == 1){
            printf("senin");
        }
        else if (bilangan == 2){
            printf("selasa");
        }
        else if (bilangan == 3){
            printf("rabu");
        }
        else if (bilangan == 4){
            printf("kamis");
        }
        else if (bilangan == 5){
            printf("jum'at");
        }
        else if (bilangan == 6){
            printf("sabtu");
        }
        else {
            printf("minggu");
    }
    else {
        printf("masukan nomor hari tidak tepat");
    }
    return 0;
}


