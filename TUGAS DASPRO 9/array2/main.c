#include <stdio.h>
#include <stdlib.h>

// Nama = Husin Sufi
// NIM = A11.2018.10909
// Kelompok = A11.4102

int main()
{
    printf("***mencetak 20 data yang telah diinputkan menggunakan ARRAY OF INTEGER***\n\n");
    int ar[21];
int i;
for (i=0; i<21; i++)
{
    printf("masukkan array ke-[%d]  :  ",i);
    scanf("%f", &ar[i]);
}
    return 0;
}
