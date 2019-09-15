#include <stdio.h>
#include <stdlib.h>

// Nama = Husin Sufi
// NIM = A11.2018.10909
// Kelompok = A11.4102

int main()
{
    printf("***cetak data float sesuai inputan\n\n");
float arr[30];
int i;
int j;
int k;
char klik;

home:
 system("cls");

printf("masukkan banyak nya data (FLOAT) yang ingin di input : "); scanf("%d",&j);

for (i=0; i<j; i++)
{
    printf("\ninput ke [%d] adalah = ",i); scanf("%f",&arr[i]);
}

printf("apa anda ingin input angka lagi? Y/N  :  "); scanf(" %c",&klik);
if (klik=='Y'|| klik=='Y')
{
    goto home;
}

for (k=0; k<j; k++)
{
    printf("data di index ke [%d] = %.2f\n7", k,arr[k] );
}



    return 0;
}
