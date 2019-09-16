#include <stdio.h>
#include <stdlib.h>

// Nama = Husin Sufi
// NIM = A11.2018.10909
// Kelompok = A11.4102

int main()
{
   int i,j; ///iterator

for (i=5; i>=1; i--) /// diawali 5 dan dibatasi hingga lebih dari sama dengan 1. nilai pembaharuan i-- (outter loop)
{
    for (j=1; j<=i; j++)  /// diawali 1 dibatasi hingga nilai i. j akan berkurang 1 jika melakukan perulangan mengikuti i (inner loop)
    {
        printf("*");
    }
    printf("\n");
}

    return 0;
}
