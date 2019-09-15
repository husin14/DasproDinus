#include <stdio.h>
#include <stdlib.h>

/*Nama : Husin Sufi
  NIM  : A11.2018.10909
  Kelas: A11.4012
*/

//KASUS = Anda sebagai programmer Udinus diminta untuk program list menu dan harga paket data isi ulang sesuai operator seluler masing masing. User diberikan pilihan berbagai menu paket data. Setelah memilih paket data User diminta untuk memasukan nomor HP yang akan di isi ulang paket data. Setelah itu user diminta untuk membayar ke kasir dan paket data akan dikirim.

int main()
{
    int menu;
    int menu2;
    char nohp[30];





    puts("=========DAFTAR ISI ULANG PAKET DATA INTERNET NURUTS TSAQALAIN CELL===========");
    puts("1. Telkomsel");
    puts("2. Smartfren");
    puts("3. Indosat");
    puts("4. Three");

    printf("Pilih jenis operator seluler yang anda pakai :  "); scanf("%d",&menu);
    switch(menu)
    {
       case 1 : puts("\n\n<<<<<<Daftar paket internet telkomsel>>>>>>\n\n");
                puts("1. 75rb,15GB,30hr");
                puts("2. 65rb,8GB,30hr");
                puts("3. 35rb,3GB,30hr");
            printf("\nsilahkan pilih paket yang anda sukai :  "); scanf("%d",&menu2);
            switch (menu2)
            {
                case 1 : printf("\npaket yang anda pilih adalah 75rb,15GB,30hr");
                break;
                case 2 : printf("\npaket yang anda pilih adalah 65rb,8GB,30hr");
                break;
                case 3 : printf("\npaket yang anda pilih adalah 35rb,3GB,30hr");
                break;

            }break;


        case 2 : puts("\n\n<<<<<<Daftar paket internet smartfren>>>>>>\n\n");
                puts("1. 65rb,unlimited,30hr(FUP 1GB/hr)");
                puts("2. 50rb,8GB,30hr");
                puts("3. 20rb,5GB,30hr (2GB 07.00-11.59 & 3GB 12.00-06.59)");
                 printf("\nsilahkan pilih paket yang anda sukai :  "); scanf("%d",&menu2);
            switch (menu2)
            {
                case 1 : printf("\npaket yang anda pilih adalah 65rb,unlimited,30hr(FUP 1GB/hr)");
                break;
                case 2 : printf("\npaket yang anda pilih adalah 50rb,8GB,30hr");
                break;
                case 3 : printf("\npaket yang anda pilih adalah 20rb,5GB,30hr (2GB 07.00-11.59 & 3GB 12.00-06.59)");
                break;

            }break;

        case 3 : puts("\n\n<<<<<<Daftar paket internet indosat>>>>>>\n\n");
                 puts("1. 100rb,20GB,30hr(unlimited youtube)");
                 puts("2. 70rb,15GB,30hr(unlimited medsos)");
                 puts("3. 39rb,6GB,30hr(unlimited chat)");

                printf("\nsilahkan pilih paket yang anda sukai :  "); scanf("%d",&menu2);
            switch (menu2)
            {
                case 1 : printf("\npaket yang anda pilih adalah 100rb,20GB,30hr(unlimited youtube) ");
;                break;
                case 2 : printf("\nPaket yang anda pilih adalah 70rb,15GB,30hr(unlimited medsos)");
                break;
                case 3 : printf("\nPaket yang anda pilih adalah 39rb,6GB,30hr(unlimited chat)");
                break;

            }break;

        case 4 : puts("\n\n<<<<<<Daftar paket internet three>>>>>>");
                 puts("1. 25rb,4GB,30hr(Unlimited facebook & WA)");
                 puts("2. 55rb,8GB,30hr (Unlimited facebook & WA)");
                 puts("2. 80rb,10GB,30hr (Unlimited facebook & WA)");

                 printf("\nsilahkan pilih paket yang anda sukai :  "); scanf("%d",&menu2);
            switch (menu2)
            {
                case 1 : printf("\nPaket yang anda pilih adalah 25rb,4GB,30hr(Unlimited facebook & WA)");
                break;
                case 2 : printf("\nPaket yang anda pilih adalah 55rb,8GB,30hr (Unlimited facebook & WA)");
                break;
                case 3 : printf("\nPaket yang anda pilih adalah 80rb,10GB,30hr (Unlimited facebook & WA)");
                break;

            }break;
    }
    puts("\n..................................................................");
    printf("\nMasukkan No Telp Yang akan di isi paket data : "); scanf("%s",&nohp);
    puts("\n..................................................................");

    printf("\nSilahkan lakukan pembayaran kekasir dan\n Paket Data akan segera kami isi ke nomor : %s",nohp);


    printf("\n\n========================TERIMA KASIH========================");
    printf("\n\nCREATOR BY : HUSIN SUFI (A11.2018.10909)\n\n\n");
    return 0;
}
