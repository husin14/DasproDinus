#include <stdio.h>
#include <stdlib.h>

/*Nama : Husin Sufi
  NIM  : A11.2018.10909
  Kelas: A11.4012
  Tugas no 1 memperbaiki program dan sertakan analisa kesalahan
*/

int main()
{
    char nama[40];
    char tanggal[50];
    int menu,banyak;
    int harga,total;

    puts("==========================CAFE ODETTE SEMARANG==========================");
    printf("Nama Pembeli      :  ");
    fflush(stdin);
    gets(nama);
    printf("Tanggal Pembelian :  ");
    fflush(stdin);
    gets(tanggal);
    fflush(stdin);

    puts("\n\nmenu minuman");
    puts("1. ice tea            @6000");
    puts("2. caramel machiato   @6000");
    puts("3. Green Tea Latte    @25000");
    puts("4. Milkshake          @15000");
    puts("5. Chocolate Hazelnut @25000");
    printf("pilihlah menu makanan yang ada di daftar(1/2/3/4/5):");
    scanf("%d", &menu);
    switch (menu)
    {
     case 1:
     harga=6000 ;
     printf("anda memesan ice tea");break;
     case 2:
     harga=6000;
     printf("anda memesan caramel machiato");break;
     case 3:
     harga=25000;
     printf("anda memesan green tea latte");break;
     case 4:
     harga=15000;
     printf("anda memesan milkshake");break;
     case 5:
     harga=25000;
     printf("anda memesan chocolate hazelnut");break;
     default:printf("pesanan yang anda pilih tidak tersedia");
    }
    printf(" banyaknya pesanan : ");
    scanf("%d",&banyak);

    printf("\n\n>>>>>>>>>>>>>>>>>>>>>>>>>>NOTA PEMBELIAN<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n\n");
    printf("Nama Pembeli      : %s\n",nama);
    printf("Tanggal Pembelian : %s\n",tanggal);
    total=banyak*harga;
    printf("Total Pembayaran  :RP.%d \n", total);
    printf("\n\n>>>>>>>>>>>>>>>>>>>>>>>>>>MATURNUWUN<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n\n");
    return 0;
}
