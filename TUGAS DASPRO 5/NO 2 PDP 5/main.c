#include <stdio.h>
#include <stdlib.h>

/*Nama : Husin Sufi
  NIM  : A11.2018.10909
  Kelas: A11.4012
*/

int main()
{
char nama[30];
char tanggal[30];
int jumlah_kaleng;
int biaya;
int merk;
int harga;


puts("===============PERUSAHAAN CAT BANG TOYIB=====================");
printf("Nama Pembeli : ");
fflush(stdin);
gets(nama);
printf("Tanggal Pmbelian : ");
fflush(stdin);
gets(tanggal);
puts("Merk Cat:");
puts("1. dulux");
puts("2. catylac");
puts("3. nippon paint");
puts("4. avitex");
puts("5. mowillex");
printf("\nmerk cat yang ingin dibeli:");
scanf("%d",&merk);
printf("\njumlah kaleng yang ingin dibeli:");
scanf("%d",&jumlah_kaleng);
switch(merk){
case 1: if(jumlah_kaleng>=1&&jumlah_kaleng<=25)
        {
        harga=24500;
        puts("anda memilih merk cat dulux");
        printf("harga satuan:24500\n");
        biaya=jumlah_kaleng*harga;
        }
       else if(jumlah_kaleng>=26&&jumlah_kaleng<=50)
        {
            harga=22500;
            puts("anda memilih merk cat dulux");
            printf("harga satuan:22500\n");
            biaya=jumlah_kaleng*harga;
        }
        else if(jumlah_kaleng>=50)
        {
            harga=22000;
            puts("anda memilih merk cat dulux");
            printf("harga satuan:22000\n");
            biaya=jumlah_kaleng*harga;
        }break;
case 2: if(jumlah_kaleng>=1&&jumlah_kaleng<=25)
        {
        harga=23500;
        puts("anda memilih merk cat catylac");
        printf("harga satuan:23500\n");
        biaya=jumlah_kaleng*harga;
        }
       else if(jumlah_kaleng>=26&&jumlah_kaleng<=50)
        {
            harga=22500;
            puts("anda memilih merk cat catylac");
            printf("harga satuan:22500\n");
            biaya=jumlah_kaleng*harga;
        }
        else if(jumlah_kaleng>=50)
        {
            harga=21000;
            puts("anda memilih merk cat catylac");
            printf("harga satuan:21000\n");
            biaya=jumlah_kaleng*harga;
        }break;
case 3: if(jumlah_kaleng>=1&&jumlah_kaleng<=25)
        {
        harga=23500;
        puts("anda memilih merk cat nippon paint");
        printf("harga satuan:23500\n");
        biaya=jumlah_kaleng*harga;
        }
       else if(jumlah_kaleng>=26&&jumlah_kaleng<=50)
        {
            harga=22000;
            puts("anda memilih merk cat nippon paint");
            printf("harga satuan:22000\n");
            biaya=jumlah_kaleng*harga;
        }
        else if(jumlah_kaleng>=50)
        {
            harga=20500;
            puts("anda memilih merk cat nippon paint");
            printf("harga satuan:20500\n");
            biaya=jumlah_kaleng*harga;
        }break;
case 4: if(jumlah_kaleng>=1&&jumlah_kaleng<=25)
        {
        harga=20000;
        puts("anda memilih merk cat avitex");
        printf("harga satuan:20000\n");
        biaya=jumlah_kaleng*harga;
        }
       else if(jumlah_kaleng>=26&&jumlah_kaleng<=50)
        {
            harga=19000;
            puts("anda memilih merk cat avitex");
            printf("harga satuan:19000\n");
            biaya=jumlah_kaleng*harga;
        }
        else if(jumlah_kaleng>=50)
        {
            harga=17500;
            puts("anda memilih merk cat avitex");
            printf("harga satuan:17500\n");
            biaya=jumlah_kaleng*harga;
        }break;
case 5: if(jumlah_kaleng>=1&&jumlah_kaleng<=25)
        {
        harga=18500;
        puts("anda memilih merk cat mowilex");
        printf("harga satuan:18500\n");
        biaya=jumlah_kaleng*harga;
        }
       else if(jumlah_kaleng>=26&&jumlah_kaleng<=50)
        {
            harga=17000;
            puts("anda memilih merk cat mowilex");
            printf("harga satuan:17000\n");
            biaya=jumlah_kaleng*harga;
        }
        else if(jumlah_kaleng>=50)
        {
            harga=16000;
            puts("anda memilih merk cat mowilex");
            printf("harga satuan:16000\n");
            biaya=jumlah_kaleng*harga;
        }break;
}
puts("=============nota pembayaran===================");
printf("nama pembeli:%s\n",nama);
printf("tanggal pembelian:%s\n",tanggal);
printf("jumlah kaleng cat:%d\n",jumlah_kaleng);
printf("total pembayaran kaleng cat yang harus dibayar:%d",biaya);
return 0;
}
