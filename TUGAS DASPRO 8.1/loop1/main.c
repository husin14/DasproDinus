#include <stdio.h>
#include <stdlib.h>

// Nama = Husin Sufi
// NIM = A11.2018.10909
// Kelompok = A11.4102

int main()
{
    int nilai,pangkat,looping,hasil=1;
    printf("masukkan input base : "); scanf("%d",&nilai);
    printf("masukkan input exponen:"); scanf("%d",&pangkat);

    for(looping=1;looping<=pangkat;looping++){
    hasil=hasil*nilai;
    }
    printf("%d^%d = %d",nilai,pangkat,hasil);
    return 0;
}
