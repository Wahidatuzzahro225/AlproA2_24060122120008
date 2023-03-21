/*
Nama Program  : JumBarKolMat.c
Deskripsi     : program ini menghitung dan menampilkan jumlah dari baris dan kolom suatu array matriks yang dimasukkan (Menggunakan inputan jenis dinamis)
Nama Pembuat  : Wahidatuzzahro Febria Fithrurrahmah
NIM           : 24060122120008
Tanggal       : 21 Maret 2023
*/

#include<stdio.h>

int main()
{
    //Kamus Lokal
    int baris, kolom;
    int i, j ;
    int matrik[10][10];
    int jumlahbaris, jumlahkolom;

    //Algoritma
    //inputan matriks
    printf("Input jumlah baris matrik : "); scanf("%d", &baris);
    printf("Input jumlah kolom matrik : "); scanf("%d", &kolom);
    printf("___________________________________________________");

    printf("\n nInput nilai matrik 1 :n");
    for (i = 0; i < baris; i++){
        for (j = 0; j < kolom; j++){
        printf("\n Input Matriks 1[%d][%d]: ",i+1,j+1);
        scanf("%d",&matrik[i][j]);
        }
    }

    //Visualisasi matriks
    printf("\n Visualisasi Matrik : \n");
    for (i=0; i< baris; i++){
        for (j=0; j<kolom; j++){
        printf("%3d", matrik[i][j]);
        }
    printf("\n");
    }

    //Komputasi Penjumlahan Baris
    for (i=0;i<baris;i++){
        jumlahbaris=0;
        for (j=0;j<kolom;j++){
            jumlahbaris = jumlahbaris + matrik[i][j];
        }
        printf(" \n\n Jumlah baris ke-%d = %d", i+1, jumlahbaris);
    }

    //Komputasi Penjumlahan Kolom
    for(i=0;i<baris;i++){
        jumlahkolom=0;
        for (j=0;j<kolom;j++){
            jumlahkolom= jumlahkolom + matrik[j][i];
        }
        printf(" \n\n Jumlah kolom ke-%d = %d", i+1, jumlahkolom);
   }
    return 0;
}
