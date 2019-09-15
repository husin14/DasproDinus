#include <stdio.h>
#include <stdlib.h>

    /*Nama : Husin Sufi
  NIM  : A11.2018.10909
  Kelas: A11.4012
*/


int main()
{
    int i;
    float rata,jumlah=0,banyak=0;


    for(i=1;i<=60;i++){
        if(i%3==0){
            banyak=banyak+1; printf("[%d]",banyak);
            jumlah=jumlah+i;
            printf("%d\n",i);
        }
    }

    printf("banyaknya data = %.0f\n",banyak);
    printf("total nilai keseluruhan = %.0f\n",jumlah);
    rata=jumlah/banyak;
    printf("rata-ratanya adalah %.2f",rata);
    return 0;
}
