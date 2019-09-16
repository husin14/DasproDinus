#include <stdio.h>
#include <stdlib.h>

// Nama = Husin Sufi
// NIM = A11.2018.10909
// Kelompok = A11.4102

int main()
{
    /*KAMUS*/
    int x, y, z, batas;
    /*ALGORITMA*/

    printf("Input Batas Deret Bilangan Fibonacci : ");
    scanf("%d", &batas);
    printf("Output                   : ");
    x = 0;
    y = 1;
    z = 1;
    printf("%d,", x);



    while(z <= batas)
    {
        printf("%d,", z);
        z = x + y;
        x = y;
        y = z;
    }

    return 0;
}
