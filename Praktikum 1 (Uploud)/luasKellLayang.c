/*
Nama Program  : luasKellLayang.c
Deskripsi     : program ini menghitung Luas dan Keliling layang-layang ( Luas=1/2*d1*d2 dan Kell=2*(s1+s2))
Nama Pembuat  : Wahidatuzzahro Febria Fithrurrahmah
NIM           : 24060122120008
Tanggal       : 27 Februari 2023
*/

#include <stdio.h>
int  LuasKellLayang(void)
{
    /*Kamus Lokal*/
    float s1,s2,d1,d2, Luas, Kell;

    /*Algoritma*/
    printf("Input sisi satu layang-layang (m):");
    scanf ("%f", &s1);

    printf("Input sisi dua layang-layang (m):");
    scanf ("%f", &s2);

    printf("Input diagonal satu layang-layang (m):");
    scanf ("%f", &d1);

    printf("Input diagonal dua layang-layang (m):");
    scanf ("%f", &d2);

    Luas = 0.5 * d1 * d2;
    printf("Luas layang-layang (m^2): %f",Luas);

    Kell = 2*(s1+s2);
    printf("Keliling layang-layang (m): %f",Kell);
    return 0;
}


