#include <stdio.h>
#include <stdlib.h>

// Nama = Husin Sufi
// NIM = A11.2018.10909
// Kelompok = A11.4102

int main()
{
     int i,j; ///iterator

 for (i=1; i<=5; i++)  /// diawali 1 dan dibatasi hingga kurang dari sama dengan 5. nilai pembaharuan i++ (outter loop)
 {
     for (j=5; j>=1;  j--) ///diawali 5 dibatasi hingga nilai 1. j akan bertambah 1 jika melakukan perulangan (inner loop)
     {
         if(j>i ){
            printf(" ");
         }
         else
         {
           printf("*");
         }

     }
     printf("\n");
 }
    return 0;
}
