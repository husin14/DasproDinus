#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Nama = Husin Sufi
// NIM = A11.2018.10909
// Kelompok = A11.4102

int main()
{
    int inputan;
    int i;
    int jml=0;

    printf("masukkan banyak angka yang ingin di input : "); scanf("%d",&inputan);

    int angka[inputan];

    for (i=0; i<inputan; i++)
    {
        printf("angka ke-[%d] = ",i); scanf("%d",&angka[i]);
    }

     for(i=0;i<inputan;i++)
    {
        if(angka[i]%2==0)
        {
            jml++;
            if(jml==2)
            {
                printf("\n %d terdapat pada index ke-%d\n", angka[i], i);
            }
        }
    }


    return 0;
}
