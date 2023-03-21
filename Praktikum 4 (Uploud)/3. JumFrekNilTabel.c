/*
Nama Program  : JumlFrekNilTabel.c
Deskripsi     : Program ini menentukan dan menampilkan jumlah elemen yang muncul lebih dari satu kali dari array inputan yang dimasukkan (Menggunakan inputan jenis dinamis)
Nama Pembuat  : Wahidatuzzahro Febria Fithrurrahmah
NIM           : 24060122120008
Tanggal       : 20 Maret 2023
*/

#include <stdio.h>

int  main(void){
    // Kamus Lokal
    int *tabel;
    int n; //panjang tabel
    int i,j;
    int jumlah;
    int frekuensi;

    // Algoritma
    printf("Masukkan panjang tabel : ");
    scanf("%d", &n);

    //(Konsep Algoritma) setiap elemen dari suatu array yang muncul lebih dari satu kali akan dihitung jumlahnya sesuai dengan frekuensi munculnya.
    // setiap elemen akan dicek frekuensi kemunculannya, elemen yang memiliki frekuensi lebih dari satu akan dikalikan dengan frekuensinya.
    // setiap elemen yang telah dikalikan dengan frekuensinya akan ditambahkan dengan elemen lain yang juga memiliki frekuensi lebih dari satu dan
    // dikalikan dengan frekuensinya

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
        //Komputasi jumlah elemen yang frekuensinya lebih dari satu
        for (i=0; i<n; i++){
            frekuensi = 0;
            for (j=0;j<n;j++){
                if ((frekuensi==0) && (i != j) && (tabel[i]==tabel[j])){
                    frekuensi += 1;
                    jumlah += tabel[i];
                }
            }
        }
    }
    printf("\n Jumlah dari elemen yang memiliki frekuensi lebih dari satu adalah %d",jumlah);
    free(tabel);
    return 0;
}
