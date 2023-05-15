/*
Nama Program  : Descending.c
Deskripsi     : program ini menyortir suatu data menjadi data dari besar ke kecil
Nama Pembuat  : Wahidatuzzahro Febria Fithrurrahmah
NIM           : 24060122120008
Tanggal       : 15 Mei 2023
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    //kamus lokal
      int *tabel;
      int n;
      int i,j;
      int temp;

    //algoritma

    /*Inputan dinamis*/
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

    /*main algorithm*/
      printf("\n-----------------------------\n");
      printf("Sebelum diurutkan : ");
      for(i=0; i<n; i++) {
        printf("%d ", tabel[i]);
      }

    /*Proses descending*/
      for(i=0; i<n; i++) {
        for(j=i+1; j<n; j++) {
          if(tabel[i] < tabel[j]) {
            int temp = tabel[i];
            tabel[i] = tabel[j];
            tabel[j] = temp;
          }
        }
      }

      printf("\n-----------------------------\n");
      printf("Setelah diurutkan: ");
      for(i=0; i<n; i++) {
        printf("%d ", tabel[i]);
      }
      printf("\n-----------------------------\n");

    return 0;
}
