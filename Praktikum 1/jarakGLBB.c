/*
Nama Program  : jarakGLBB.c
Deskripsi     : program ini menghitung dan menampilkan jarak GLBB (s) di layar, s = (v0*t)+(1/2*(a*t^2))
Nama Pembuat  : Wahidatuzzahro Febria Fithrurrahmah
NIM           : 24060122120008
Tanggal       : 27 Februari 2023
*/

#include <stdio.h>
int  JarakGLBB(void)
{
    /*Kamus Lokal*/
    float s,v0,t,a;

    /*Algoritma*/
    printf("Input kecepatan awal (m/s):");
    scanf ("%f", &v0);

    printf("Input waktu (s):");
    scanf ("%f", &t);

    printf("Input percepatan (m/s^2):");
    scanf ("%f", &a);


    s = (v0 * t) + (0.5 * (a*t*t));
    printf("jarak GLBB (m): %f",s);
    return 0;
}
