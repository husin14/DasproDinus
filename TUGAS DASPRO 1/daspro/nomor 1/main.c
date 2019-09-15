#include <stdio.h>
#include <stdlib.h>

/*Nama : Husin Sufi
  NIM  : A11.2018.10909
  Kelas: A11.4012
  Tugas no 1 memperbaiki koding yang error
*/
int main()
{
    /* Kamus */
    int a;
    float b;
    char c;
    char d[10];
    /* Algoritma */
    printf("Masukkan nilai integer : "); scanf("%d", &a);
    printf("Angka integer : %d\n\n", a);
    printf("Masukkan nilai float : "); scanf("%f", &b);
    printf("Angka float : %.2f\n\n", b);
    printf("Masukkan karakter : "); scanf(" %c", &c);
    printf("Karakter : %c\n\n", c);
    fflush(stdin);
    printf("Masukkan kalimat : "); gets(d);
    printf("Kalimat : %s", d);
    return 0;
}
