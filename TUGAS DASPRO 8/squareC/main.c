#include<stdio.h>
#include<stdlib.h>

// Nama = Husin Sufi
// NIM = A11.2018.10909
// Kelompok = A11.4102

int main(){
    int batas, nilai1, nilai2, nilai3, nilai4;

    printf("Input Batas : ");
    scanf("%d",&batas);

    for(nilai1=1;nilai1<=batas;nilai1++){
        if(batas%2 == 1){
            nilai3 = (batas+1)/2;
            nilai4 = 0;
        }
        else{
            nilai3 = batas/2;
            nilai4 = nilai3+1;
        }

    for(nilai2=1;nilai2<=batas;nilai2++){
        if(nilai1 == nilai3 || nilai1 == nilai4){
           printf("0");
        }
        else{
            if(nilai2 == nilai3 || nilai2 == nilai4){
               printf("0");
            }
            else{
                printf("1");
            }
        }
    }
        puts("");
    }

    return 0;
}
