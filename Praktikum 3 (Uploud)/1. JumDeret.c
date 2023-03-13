/*
Nama Program  : JumDeret.c
Deskripsi     : Program ini menghitung dan menampilkan jumlah deret bilangan hingga bilangan ke N
Nama Pembuat  : Wahidatuzzahro Febria Fithrurrahmah
NIM           : 24060122120008
Tanggal       : 7 Maret 2023
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    //kamus lokal
    int i, N, Jumlah=0;

    //algoritma
    printf("Masukkan Deret bilangan : ");
    scanf("%d",&N);

    if ( N<=0){
        printf("Masukan harus positif");
    }else{
        for (i=1; i<=N; i++){
            Jumlah += i;
        }
        printf("Jumlah total deret bilangan adalah: %d", Jumlah);
    }

    return 0;
}
