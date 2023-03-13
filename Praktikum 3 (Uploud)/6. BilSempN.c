/*
Nama Program  : BilSempN.c
Deskripsi     : Program ini menampilkan bilangan sempurna hingga ke N 
Nama Pembuat  : Wahidatuzzahro Febria Fithrurrahmah
NIM           : 24060122120008
Tanggal       : 8 Maret 2023
*/

#include <stdio.h>

int main(void){
    //kamus lokal
    int N,i,j=0,jumlah;

    //Algoritma
    printf("masukkan nilai N: ");
    scanf("%d",&N);

    if(N<=0){
        printf("Nilai N harus positif");
    }else{
        for (i=1; i<=N; i++){
            jumlah=0;
            for(j=1; j<i; j++){
                if(i%j==0){
                    jumlah=jumlah+j;
                }
            }
            if (jumlah == i){
                printf("%d", i);
                printf("\n");
            }
        }
    }
    return 0;
}
