/*
Nama Program  : FrekNilTabel.c
Deskripsi     : program ini menentukan dan menampilkan elemen yang muncul lebih dari satu kali dari array inputan yang dimasukkan (Menggunakan inputan jenis dinamis)
Nama Pembuat  : Wahidatuzzahro Febria Fithrurrahmah
NIM           : 24060122120008
Tanggal       : 19 Maret 2023
*/

#include <stdio.h>

int  main(void){
    // Kamus Lokal
    int *tabel;
    int n; //panjang tabel
    int i,j;
    int frekuensi;

    // Algoritma
    printf("Masukkan panjang tabel : ");
    scanf("%d", &n);

    //(Konsep Algoritma) Setiap inputan array akan dicek elemennya dengan menggunakan looping.
    // Looping akan menghitung frekuensi tiap elemennya. elemen yang memiliki frekuensi lebih dari satu akan dimunculkan ke output.

    if (n<= 0){
        printf("masukan harus positif");
    }else{
        //Loop inputan dinamis
        tabel = (int*)malloc(n*sizeof(int));
        for (i=0; i<n; i++){
            printf("masukkan nilai ke %d: ", i);
            scanf("%d", &tabel[i]);
        }
        for (i=0; i<n; i++){
            printf("posisi ke-%d memiliki isi: %d \n", i, tabel[i]);
        }
        //Loop menghitung frekuensi elemen dan mengoutputkan elemen yang memiliki frekuensi lebih dari satu
        for (i=0; i<n; i++){
            frekuensi = 0;
            for (j=0;j<n;j++){
                if (tabel[i] != 0 && tabel[i]==tabel[j]){
                    frekuensi = frekuensi+1;
                    }
                }
            if (frekuensi == 2){
                printf ("Elemen yang memiliki frekuensi lebih dari satu adalah %d \n",tabel[i]);
            }
            tabel[i]=0;
            }
        }
    free(tabel);
    return 0;
}
