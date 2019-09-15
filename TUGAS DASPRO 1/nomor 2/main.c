#include <stdio.h>
#include <stdlib.h>

/*Nama : Husin Sufi
  NIM  : A11.2018.10909
  Kelas: A11.4012
  Tugas no 3 membuat rumus luas dan keliling segitiga
*/
int main()
{
    //kamus
    float A,T,LUAS,S1,S2,S3,KELILING;

    //algoritma
    printf("masukkan besarnya nilai\n");
    printf("panjang Alas \t:");
    scanf("%f",&A);
    printf("panjang Tinggi \t:");
    scanf("%f",&T);
    printf("panjang sisi pertama \t:");
    scanf("%f",&S1);
    printf("panjang sisi kedua \t:");
    scanf("%f",&S2);
    printf("panjang sisi kedua \t:");
    scanf("%f",&S3);
    LUAS=A*T/2;
    KELILING=S1+S2+S3;
    printf("\n jadi hasil luas segitiga :%.2f\n",LUAS);
    printf("\n hasil keliling segitiga :%.2f",KELILING);
    return 0;
}
