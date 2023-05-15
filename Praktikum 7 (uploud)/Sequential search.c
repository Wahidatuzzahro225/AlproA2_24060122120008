/*
Nama Program  : Sequential search.c
Deskripsi     : program ini mencari harga X dalam Tabel T [1..N] secara sequensial  mulai dari T1.
Nama Pembuat  : Wahidatuzzahro Febria Fithrurrahmah
NIM           : 24060122120008
Tanggal       : 15 Mei 2023
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    //kamus lokal
    int *tabel;
    int n;
    int i;
    int iX;
    int x;

    //Algoritma

    /*Inputan Dinamis*/
    printf ("masukkan panjang tabel: ");
    scanf ("%d", &n);
    if (n<= 0){
        printf("masukan harus positif");
    }else{
        // Loop inputan dinamis
        tabel = (int*)malloc(n*sizeof(int));
        for (i=0; i<n; i++){
            printf("masukkan nilai ke %d: ", i);
            scanf("%d", &tabel[i]);
        }
        for (i=0; i<n; i++){
            printf("posisi ke-%d memiliki isi: %d \n", i, tabel[i]);
        }
    }

    printf ("masukkan nilai yang ingin dicari: ");
    scanf("%d", &x);
    printf ("___________________________________\n");

    /*main algoritma*/
    i = 0;
    while (i<n && tabel[i]!=x) {
        i = i + 1;
    }
    if(tabel[i]==x){
        iX = i+1;
        printf("terdapat pada urutan %d",iX);
    }else{
        iX = 0;
        printf("Tidak terdapat data tersebut, terdapat pada urutan %d",iX);
    }
  return 0;
}

