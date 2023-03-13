/*
Nama Program  : CekBilSemp.c
Deskripsi     : Program ini menentukan apakah bilangan ke N merupakan bilangan sempurna atau bukan
Nama Pembuat  : Wahidatuzzahro Febria Fithrurrahmah
NIM           : 24060122120008
Tanggal       : 8 Maret 2023
*/

#include <stdio.h>

int main(void){
    //Kamus Lokal
    int N, i, Jumlah=0;

    //Algoritma
    printf("masukkan nilai N ");
    scanf("%d", &N);

    if (N<=0){
        printf("Nilai N harus Positif");
    }else{
        for (i=1; i<N; i++){
            if (N%i == 0){
                Jumlah=Jumlah+i;
            }
        }
        if (Jumlah == N){
            printf("Bilangan Sempurna");
        }else{
            printf("Bukan Bilangan Sempurna");
        }
    }
    return 0;
}
