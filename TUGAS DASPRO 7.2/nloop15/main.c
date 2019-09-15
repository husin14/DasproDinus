#include <stdio.h>
#include <stdlib.h>

// Nama = Husin Sufi
// NIM = A11.2018.10909
// Kelompok = A11.4102

int main()
{
    int i,j; ///iterator

for (i=1; i<=5; i++) /// diawali 1 dan dibatasi hingga kurang dari sama dengan 5. nilai pembaharuan i++ (outter loop)
{
    for (j=1; j<=i; j++) /// diawali 1 dibatasi hingga nilai i. j akan bertambah 1 jika melakukan perulangan mengikuti i (inner loop)
    {
        printf("*");
    }
    printf("\n");
}
    return 0;
}
