#include <stdio.h>
#include <stdlib.h>

/*Nama : Husin Sufi
  NIM  : A11.2018.10909
  Kelas: A11.4012
  Tugas no 1 memperbaiki program dan sertakan analisa kesalahan
*/

int main()
{
    int perkaleng;
    int jumlahklg;
    int harga,total;
    char nama[30];
    char tanggal[30];


    printf("Masukkan nama pelanggan : "); gets(nama);
    fflush(stdin);
    printf("Masukkan tanggal pembelian :"); gets(tanggal);
    fflush(stdin);
    printf("jumlah kaleng cat yang ingin dibeli :"); scanf("%d",&jumlahklg);

    if (jumlahklg>=1&&jumlahklg<=10)
    {
        harga = 25000;
        printf("harga satuannya adalah Rp.25000");
        total = jumlahklg*harga;
    }
    else if (jumlahklg>=11&&jumlahklg<=25)
    {
        harga = 24500;
        printf("harga satuannya adalah Rp.24500");
        total = jumlahklg * harga;
    }
    else if (jumlahklg>=26&&jumlahklg<=50)
    {
        harga=23000;
        printf("harga satuannya adalah Rp.23000");
        total = jumlahklg *harga;
    }
    else if (jumlahklg>=50)
    {
        harga = 22000;
        printf("harga satuannya adalah Rp.22000");
        total = jumlahklg * harga;
    }
    puts("\n\n===========================STRUK BELANJA========================\n\n");
    printf("nama pembeli = %s\n",nama);
    printf("tanggal pembelian = %s\n",tanggal);
    printf("jumlah kaleng yang dipesan = %d\n",jumlahklg);
    printf("harga yang harus dibayar adalah = Rp.%d\n",total);
    puts("\n\n===========================TERIMA KASIH========================\n\n");
    return 0;
}
