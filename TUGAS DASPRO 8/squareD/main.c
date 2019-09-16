#include<stdio.h>
#include<stdlib.h>

// Nama = Husin Sufi
// NIM = A11.2018.10909
// Kelompok = A11.4102

int main(){
    int batas, nilai1, nilai2;

    printf("Input Batas : ");
    scanf("%d",&batas);

    for(nilai1=1;nilai1<=batas;nilai1++){
        for(nilai2=1;nilai2<=batas;nilai2++){
            if(nilai1 == 1 || nilai1 == batas){
                if(nilai2 == 1 || nilai2 == batas){
                    printf("0");
                }
                else{
                    printf("1");
                }
            }
            else{
                if(nilai2 == 1 || nilai2 == batas){
                    printf("1");
                }
                else{
                    printf("0");
                }
            }
        }
        puts("");
    }
    return 0;
}
