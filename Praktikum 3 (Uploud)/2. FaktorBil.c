/*
Nama Program  : FaktorBil.c
Deskripsi     : Program ini menampilkan faktor perkalian dari bilangan N
Nama Pembuat  : Wahidatuzzahro Febria Fithrurrahmah
NIM           : 24060122120008
Tanggal       : 8 Maret 2023
*/

#include <stdio.h>

int main(void){

    //kamus lokal
    int N, i, Jumlah;

    //Algoritma
    printf("masukkan bilangan inputan N ");
    scanf("%d", &N);

    if (N<=0){
        printf("nilai N wajib Positif");
    }else{
        for (i=1; i<=N; i++){
            if (N%i == 0){
                printf("%d",i);
                printf("\n");
            }
        }
    }
    return 0;
}
