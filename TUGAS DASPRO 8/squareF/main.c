#include <stdio.h>
#include <stdlib.h>

// Nama = Husin Sufi
// NIM = A11.2018.10909
// Kelompok = A11.4102

int main ()
{

    int kolom, baris, batas;

    printf ("Input Batas : ");
    scanf  ("%d", &batas);
    printf ("\nOutput : \n\n");
    for(baris=1;baris<=batas;baris++)
    {
        for(kolom=1;kolom<=batas;kolom++)
        {
            printf("%d",kolom);
        }
        printf("\n");
    }

    return 0;
}
