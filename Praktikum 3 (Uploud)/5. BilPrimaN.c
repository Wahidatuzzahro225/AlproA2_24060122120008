/*
Nama Program  : BilPrimaN.c
Deskripsi     : Program ini menampilkan bilangan prima hingga ke N 
Nama Pembuat  : Wahidatuzzahro Febria Fithrurrahmah
NIM           : 24060122120008
Tanggal       : 8 Maret 2023
*/

#include <stdio.h>

int main(void) {
    //Kamus Lokal
    int N,i,a,b;

    //Algoritma
    printf("Masukkan nilai N: ");
    scanf("%d", &N);

    if (N<=0){
        printf("Nilai N harus Positif");
    }else{
        for (i=1; i<=N; i++){
           a = 0;
           for (b=1; b<=i; b++){
                if (i%b == 0){
                    a = a+1;
                }
           }
           if (a==2){
                printf("%d",i);
                printf("\n");
           }
        }
    }
    return 0;
}
