#include<stdio.h>
#include<stdlib.h>

// Nama = Husin Sufi
// NIM = A11.2018.10909
// Kelompok = A11.4102

int main(){

    int batas, nilai1, nilai2, nilai3 = 1, nilai4 = 1;

    printf("Input Batas : ");
    scanf("%d",&batas);
    for(nilai1=1;nilai1<=batas;nilai1++){
        for(nilai2=1;nilai2<=nilai1;nilai2++){
            if(nilai1%2==1) {
                printf("%d ",nilai3++);
            } else {
                printf("%d ",nilai3--);
            }
        }
        nilai3+=nilai4;
        if(nilai1%2==1){
            nilai4+=2;
        }
        puts("");
    }
    return 0;
}
