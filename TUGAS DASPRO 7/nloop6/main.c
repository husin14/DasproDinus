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
    y=1;
    do
    {
         printf("angka ke- %d\n",y);
         y=y+1;

    }
    while (y<=5);

}

    return 0;
}
