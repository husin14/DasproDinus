#include<stdio.h>
#include<stdlib.h>

// Nama = Husin Sufi
// NIM = A11.2018.10909
// Kelompok = A11.4102

int main()
{
    int batas, nilai1, nilai2;

    printf("Input Batas : ");
    scanf("%d",&batas);

    for(nilai1=1;nilai1<=batas;nilai1++){
        for(nilai2=1;nilai2<=batas;nilai2++){
            if(nilai2%2==1) {
                printf("0");
            } else {
                printf("1");
            }
        }
        puts("");
    }

    return 0;
}

