/*
Nama Program  : NilMax2Tabel.c
Deskripsi     : program ini menentukan dan menampilkan nilai terbesar kedua dari array inputan yang dimasukkan (Menggunakan inputan jenis dinamis)
Nama Pembuat  : Wahidatuzzahro Febria Fithrurrahmah
NIM           : 24060122120008
Tanggal       : 19 Maret 2023
*/

#include <stdio.h>

int main(void){

    //kamus lokal
    int *tabel;
    int i;
    int n;//panjang tabel
    int highest1, highest2;

    //algoritma
    printf ("masukkan panjang tabel: ");
    scanf ("%d", &n);

    //(Konsep Algoritma) inputan array akan dicek menggunakan loop. Dimana array dengan indeks 0 dianggap sebagai nilai terbesar
    // dan nilai terbesar kedua dianggap 0, lalu dicek kebelakang, apabila pada indeks selanjutnya tedapat nilai yang lebih besar
    // maka nilai terbesarnya adalah indeks tersebut. dan nilai terbesar kedua adalah indeks sebelumnya. Dicepk sampai elemen habis.

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
        //Komputasi menentukan nilai terbesar kedua
        highest1=tabel[0];
        highest2=0; //inisialisasi (dianggap nilai yang paling besar adalah indeks 0
        for (i=0; i<n; i++){
            if (tabel[i] > highest1){
                highest2 = highest1;
                highest1 = tabel[i];
            }
            else if ((tabel[i] > highest2)&& (tabel[i] != highest1)){
                highest2 = tabel[i];
            }
        }
        printf("Bilangan terbesar kedua: %d", highest2);
    }

    free(tabel);
    return 0;
}
