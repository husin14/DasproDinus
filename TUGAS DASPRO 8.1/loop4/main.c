#include <stdio.h>
#include <stdlib.h>

// Nama = Husin Sufi
// NIM = A11.2018.10909
// Kelompok = A11.4102

int main(){
        int input;
        int i,j,c=0;
        printf("masukan batas bilangan prima sampai ke = ");
        scanf("%d",&input);
        puts("deret bilangan prima adalah :  ");
        for(i=1;i<=input;i++){
                for(j=1;j<=i;j++){
                        if(i%j==0){
                                c++;
                        }
                }
        if(c==2)
        printf("%d,",i);
        c=0;
        }
        puts(" ");

}
