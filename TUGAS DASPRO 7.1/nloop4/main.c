#include <stdio.h>
#include <stdlib.h>

// Nama = Husin Sufi
// NIM = A11.2018.10909
// Kelompok = A11.4102

int main()
{
    int x,y;


for (x=1; x<=7; x++) ///OUTER LOOP
{
    printf("\t\t perulangan ke %d\n",x);
    for (y=1;y<=5;y++) ///INNER LOOP
    {
        printf("angka ke- %d\n",y);
    }

}
    return 0;
}
