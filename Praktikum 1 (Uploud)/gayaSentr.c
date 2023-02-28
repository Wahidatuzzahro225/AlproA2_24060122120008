/*
Nama Program  : gayaSentr.c
Deskripsi     : program ini menghitung dan menampilkan gaya sentripetal (F) di layar, F = m*(v^2/r)
Nama Pembuat  : Wahidatuzzahro Febria Fithrurrahmah
NIM           : 24060122120008
Tanggal       : 27 Februari 2023
*/

#include <stdio.h>
int  GayaSentr(void)
{
    /*Kamus Lokal*/
    float m,v,r,F;

    /*Algoritma*/
    printf("Input massa (kg):");
    scanf ("%f", &m);

    printf("Input kecepatan (m/s):");
    scanf ("%f", &v);

    printf("Input jari-jari (m):");
    scanf ("%f", &r);


    F = m*((v*v)/r);
    printf("Gaya Sentripetal (N): %f",F);
    return 0;
}

