/*
Nama Program  : CekBilPrima.c
Deskripsi     : Program ini menentukan apakah bilangan ke N merupakan bilangan prima atau bukan 
Nama Pembuat  : Wahidatuzzahro Febria Fithrurrahmah
NIM           : 24060122120008
Tanggal       : 7 Maret 2023
*/

#include <stdio.h>

int main(void) {

    //kamus lokal
    int i, N, Jumlah=0;

    //algoritma
    printf("Masukkan nilai N : ");
    scanf("%d",&N);

    if (N<=0){
        printf("Masukan harus positif");
    }else{
        for (i=1; i<=N; i++){
            if (N%i == 0){
                Jumlah = Jumlah + 1;
            }
        }
        if (Jumlah == 2){
                printf("Bilangan Prima");
        }
        else{
                printf("Bukan Bilangan Prima");
        }
    }
    return 0;
}

