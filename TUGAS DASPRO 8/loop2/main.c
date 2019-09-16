#include <stdio.h>
#include <stdlib.h>

// Nama = Husin Sufi
// NIM = A11.2018.10909
// Kelompok = A11.4102

int main()
{
    int i,n,hasil=1;
    printf("masukkan bilangan yang ingin difaktorkan:"); scanf("%d",&n);
    printf("\n\nNilai Faktor sebagai berikut :");
    for(i=1;i<=n;i++)
    {
    if(n%i==0){
    printf("%d,",i);
    }
    }
    return 0;
}
