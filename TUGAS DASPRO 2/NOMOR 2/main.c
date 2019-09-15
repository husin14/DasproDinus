#include <stdio.h>
#include <stdlib.h>

/*Nama : Husin Sufi
  NIM  : A11.2018.10909
  Kelas: A11.4012
  Tugas no 2 membuat program rumus percepatan GLBB sesuai dengan yang sudah diketahui
*/

int main()
{

    //kamus
    float Vt;
    float Vo ;
    float t;
    float a;
    float luas;

    //algoritma
    printf("masukkan Vt : "); scanf("%f",&Vt);
    printf("masukkan Vo : "); scanf("%f",&Vo);
    printf("masukkan t  : "); scanf("%f",&t);

    a = Vt-Vo;
    luas = a/t;

    printf("\n maka percepatan GLBB nya ialah : %.3f m/s^2 ",luas);

    return 0;

}

