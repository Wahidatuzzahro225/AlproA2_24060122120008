/*
Nama Program  : Segitiga.c
Deskripsi     : program ini menentukan jenis segitiga
Nama Pembuat  : Wahidatuzzahro Febria Fithrurrahmah
NIM           : 24060122120008
Tanggal       : 6 Maret 2023
*/

#include <stdio.h>

int main(void){

    //Kamus Lokal
    int a, b, c;

    //Algoritma
    printf("Masukkan sisi 1 ");
    scanf("%d", &a);

    printf("Masukkan sisi 2 ");
    scanf("%d", &b);

    printf("Masukkan sisi 3 ");
    scanf("%d", &c);

    if (a+b>c || b+c>a || c+a>b)
        if (a==b && a!=c || b==c && a!=b || a==c && b!= c){
            printf("Segitiga sama kaki");
        }
        else if (a==b && b==c && a==c){
            printf("Segitiga sama sisi");
        }
        else if (a != b != c){
            printf("Segitiga Sembarang");
        }

    else {
        printf("Terdapat nilai yang bukan segitiga");
    }
    return 0;
}
