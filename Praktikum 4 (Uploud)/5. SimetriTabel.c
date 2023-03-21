/*
Nama Program  : SimetriTabel.c
Deskripsi     : Program ini menentukan apakah dua array yang diinputkan merupakan array yang simetris atau bukan (Menggunakan inputan jenis statis)
Nama Pembuat  : Wahidatuzzahro Febria Fithrurrahmah
NIM           : 24060122120008
Tanggal       : 21 Maret 2023
*/


#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    //Kamus Lokal
    int i;
    int frekuensi=0;
    int *Tabel1[10]= {7,4,5,7,6,5,3,5,1,4};
    int *Tabel2[10]= {7,4,5,7,6,5,3,5,1,4};
    int N1;//jumlah elemen dalam Tabel1
    int N2;//jumlah elemen dalam Tabel2

    //Algoritma
    N1=10;
    N2=10;

    //(Konsep Algoritma)Dua buah array akan simetris apabila memenuhi 2 syarat, syarat pertama yaitu jumlah elemen dalam array sama
    // dan syarat kedua adalah elemen-elemen yang ada pada array juga sama

    if (N1==N2){
        frekuensi=0;
        for(i=0;i<N1;i++){
            if (Tabel1[i] == Tabel2[i]){
                frekuensi = frekuensi + 1;
            }
        }
        if(frekuensi==N1){
            printf("Simetris");
        }
        else{
            printf("Tidak Simetris");
        }
    }
    else{
        printf("Tidak Simetris");
    }
    return 0;
}
