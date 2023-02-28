/*
Nama Program  : jarakPBola.c
Deskripsi     : program ini menghitung dan menampilkan jarak Parabola (y) di layar, y=(v0*t)-(1/2*(g*t^2)
Nama Pembuat  : Wahidatuzzahro Febria Fithrurrahmah
NIM           : 24060122120008
Tanggal       : 27 Februari 2023
*/

#include <stdio.h>
int  JarakPBola(void)
{
    /*Kamus Lokal*/
    float y, v0, t;
    const float g = 9.8;

    /*Algoritma*/
    printf("Input kecepatan awal (m/s):");
    scanf("%f", &v0);

    printf("Input waktu (s):");
    scanf("%f", &t);

    y = (v0 * t) - (0.5 * (g*t*t));
    printf("jarak parabola (m) : %f",y);
    return 0;
}

