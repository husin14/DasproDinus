#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Nama = Husin Sufi
// NIM = A11.2018.10909
// Kelompok = A11.4102

int main()
{
    int inputan;
    int i,a,b;


    printf("masukkan banyak angka yang ingin di input : "); scanf("%d",&inputan);

    int angka[inputan];

    for (i=0; i<inputan; i++)
    {
        printf("angka ke-[%d] = ",i); scanf("%d",&angka[i]);
    }

     for(i=0;i<inputan;i++)
    {
        if(angka[i]%2!=0)
        {
            a=angka[i];
            b=i;
        }

    }
    printf("\n%d terdapat pada index ke-%d\n", a, b);


    return 0;
}
