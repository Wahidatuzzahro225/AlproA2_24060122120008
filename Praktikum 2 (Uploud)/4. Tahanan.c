/*
Nama Program  : Tahanan.c
Deskripsi     : program ini menghitung jumlah total tahanan
Nama Pembuat  : Wahidatuzzahro Febria Fithrurrahmah
NIM           : 24060122120008
Tanggal       : 6 Maret 2023
*/

#include <stdio.h>

int main(void){

    //Kamus Lokal
    int i, j, k, T;

    //Algoritma
    printf("Masukkan bilangan ");
    scanf("%d", &i);

    printf("Masukkan bilangan ");
    scanf("%d", &j);

    printf("Masukkan bilangan ");
    scanf("%d", &k);

    if (i>=0 && j>=0 && k>=0 ){
        T = (i+j+k);
        printf("Total Tahanan: %d",T);
    }
    else {
        printf("masukan tahanan tidak boleh negatif");
    }
    return 0;
}
