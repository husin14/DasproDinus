#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    ///kamus
    char nama[25];
    char tanggal[25];
    int luas,nota,harga;
    double kaleng;


    ///program
    printf("masukkan Nama Pelanggan : "); gets(nama);
    printf("Masukkan Luas Dinding Yang Dibutuhkan :"); scanf("%d",&luas);
    fflush(stdin);
    printf("Masukkan Tanggal Pembelian : "); gets(tanggal);


    kaleng =  ceil((double)luas / 10);
    harga = ceil(kaleng) * 25000;

    printf("\n\n=============NOTA PEMBELIAN===============\n\n");


    printf("Nama : %s\n",nama);
    printf("Tanggal Pembelian : %s\n",tanggal);
    printf("Kaleng Cat Yang dibutuhkan : %.2f kaleng cat \n",kaleng);
    printf("Harga yang harus dibayar : %d rupiah\n",harga);

    printf("\n\n=============TERIMA KASIH===============\n\n");
    printf(" KAMI TUNGGU KEHADIRAN ANDA KEMBALI ");


    return 0;
}
