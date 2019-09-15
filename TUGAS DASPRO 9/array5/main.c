#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Nama = Husin Sufi
// NIM = A11.2018.10909
// Kelompok = A11.4102

int main()
{
   char kata[100];
   int j;

   printf("masukkan kata : "); gets(kata);

   int panjang_array= strlen(kata);

   printf("kata kebalikannya adalah = ");
   for (j=panjang_array-1; j>=0; j--)
   {
;
       printf("%c",kata[j]);
   }

    return 0;
}
