#include<stdio.h>
#include<stdlib.h>

// Nama = Husin Sufi
// NIM = A11.2018.10909
// Kelompok = A11.4102

int main(){

    int nilai1, nilai2, nilai3, batas;

    printf("Input batas :");
    scanf("%d",&batas);

    for(nilai1=2;nilai1<=(batas+1);nilai1++) {
        for(nilai2=2;nilai2<(nilai1*2);nilai2+=2) {
            printf("%d",nilai2);
        }
        for(nilai2=(nilai2-4);nilai2>=2;nilai2-=2) {
            printf("%d",nilai2);
        }
        puts("");
    }
    return 0;
}
