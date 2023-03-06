/*
Nama Program  : Kalkulator.c
Deskripsi     : program ini menentukan hasil dari menu operasi
Nama Pembuat  : Wahidatuzzahro Febria Fithrurrahmah
NIM           : 24060122120008
Tanggal       : 6 Maret 2023
*/

#include <stdio.h>

int main(void){

    //Kamus Lokal
    char operasi;
    int iA, iB;

    //Algoritma
    printf("Pilih Operasi dari karakter a-f : ");
    scanf("%c", &operasi);

    printf("Masukkan angka pertama ");
    scanf("%d", &iA);

    printf("Masukkan angka kedua ");
    scanf("%d", &iB);


    if (operasi== 'a'){
        printf("%d", iA+iB);
    }else if (operasi== 'b'){
        printf("%d", iA-iB);
    }else if (operasi== 'c'){
        printf("%d", iA*iB);
    }else if (operasi== 'd'){
        printf("%f", (float)(iA)/(float)(iB));
    }else if (operasi== 'e'){
        printf("%d", iA/iB);
    }else if (operasi== 'f'){
        printf("%d", iA%iB);
    }else{
        printf ("Bukan pilihan menu yang benar");
    }

    return 0;
}
