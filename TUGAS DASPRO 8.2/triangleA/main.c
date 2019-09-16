#include<stdio.h>
#include<stdlib.h>

// Nama = Husin Sufi
// NIM = A11.2018.10909
// Kelompok = A11.4102

int main(){

    int nilai1, nilai2, batas;

    printf("Input Batas : ");
    scanf("%d",&batas);

    for(nilai1=1;nilai1<=batas;nilai1++){
        for(nilai2= 1;nilai2<(nilai1*2);nilai2++){
            printf("%d",nilai2);
        }
        puts(" ");
    }


    return 0;
}
