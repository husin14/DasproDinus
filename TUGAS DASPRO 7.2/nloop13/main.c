#include <stdio.h>
#include <stdlib.h>

// Nama = Husin Sufi
// NIM = A11.2018.10909
// Kelompok = A11.4102

int main()
{
    int x,y,angka;

    printf("masukan angka = "); scanf("%d",&angka);

    for (x=0; x<=10; x++)
    {
        for (y=1; y<=angka; y*=angka)
        {

        }
        y=x*angka;
        printf("\n %d * %d = %d\n\n",x,angka,y);
    }



    return 0;
}
