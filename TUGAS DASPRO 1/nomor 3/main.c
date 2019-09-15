#include <stdio.h>
#include <stdlib.h>

int main()
{
    //kamus
    char a[30],b[30],c[30],d[30];


    //algoritma
    printf("============================Toshiba C640 Satellite=============================\n\n");


    printf("Seri Prosessor : "); gets(a);
        printf("Response : Thosiba C640 Satellite menggunakan Seri prosessor intel core %s  \n\n",a);

    printf("RAM : "); gets(b);
        printf("Response : Toshiba C640 Satellite memiliki %sGB RAM \n\n",b);

    printf("Hardisk : "); gets(c);
        printf("Response : Toshiba C640 Satellite memiliki Hardisk sebesar %sGB\n\n",c);

    printf("Warna : "); gets(d);
        printf("Response : Toshiba C640 Satellite memiliki varian warna %s\n\n",d);



    return 0;
}
