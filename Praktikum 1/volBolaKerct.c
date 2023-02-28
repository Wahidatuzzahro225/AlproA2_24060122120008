/*
Nama Program  : volBolaKerct.c
Deskripsi     : program ini menghitung dan menampilkan Volume Bola (Vb) dan Volume Kerucut (Vk) di layar
Nama Pembuat  : Wahidatuzzahro Febria Fithrurrahmah
NIM           : 24060122120008
Tanggal       : 27 Februari 2023
*/

#include <stdio.h>
int  main(void)
{
    /*Kamus Lokal*/
    float r,Vb,Vk;
    const float PHI=3.14;

    /*Algoritma*/
    printf("Input jari-jari (r):");
    scanf ("%f", &r);

    Vb = 4*(PHI*r*r*r)/3;
    printf("Volume bola (m^3): %f",Vb);

    Vk = Vb/2;
    printf("Volume kerucut (m^3): %f",Vk);
    return 0;
}

