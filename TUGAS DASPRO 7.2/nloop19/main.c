#include <stdio.h>
#include <stdlib.h>

// Nama = Husin Sufi
// NIM = A11.2018.10909
// Kelompok = A11.4102

int main()
{
    int pendapatan,tamp=0,tamp2=0,i,j,rata2;///deklarasi  variabel

    printf("masukkan rata rata pendapatan toko perhari : "); scanf("%d",&pendapatan);///memasukkan rata rata perhari pendapatan toko

        for (i=1; i<=12; i++) ///looping outter untuk menampilken bulan ke 1 - 12
        {
            printf("Bulan Ke %d\n",i); ///mencetak bulan
            for (j=1; j<=4; j++) /// looping inner untuk menampilkan banyaknya minggu dalam 1 bulan
            {
                    tamp = pendapatan * 7 ;  ///merubah dari pendapatan perhari menjadi pendapatan perminggu
                    tamp2+= tamp + 0; /// membuat nilai sum agar bisa di cetak

                printf("Minggu Ke-%d = Rp. %d\n",j,tamp2); ///melakukan pencetakan pendapatan perminggu

            }


        }
        rata2+= tamp2/ 48; /// rumus rata rata pendapatan
        printf("maka pendapatan rata rata pertahunnya adalah Rp.%d:",rata2); /// mencetak rata rata perndapatan





    return 0;
}
