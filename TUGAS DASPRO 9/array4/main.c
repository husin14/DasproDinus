#include <stdio.h>
#include <stdlib.h>

// Nama = Husin Sufi
// NIM = A11.2018.10909
// Kelompok = A11.4102

int main()
{
    int inputan;

    float cari;
    char ulang;
    int i,j;
     awal:
    printf("berapa banyak data yang ingin di input? : "); scanf("%d",&inputan);
    float arr1 [inputan];



    for (i=0; i<inputan; i++)
    {
        printf("%d. Input = ",i); scanf("%f",&arr1[i]);
    }

      printf("Apakah Anda Ingin Mengulangi Input Data? Y/N = "); scanf(" %c",&ulang);
            if (ulang=='Y' || ulang=='y')
            {
                goto awal;
            }


    printf("Masukkan Angka Yang ingin anda cari :"); scanf("%f",&cari);



    for (j=0; j<inputan; j++)
    {
      if (arr1[j]==cari)
    {
        printf("Data Ditemukan",j);
    }

    }

    return 0;
}
