#include <stdio.h>
#include <stdlib.h>

int main()
{
    //tabung + set bola
    float setbola;
    float tabung;
    float phi=3.14;
    float jari=2;
    //setin
    float RSetin;
    float setin;
    //hasil
    float rumus;

    printf("masukkan volume kelereng : "); scanf("%f",&RSetin);


    tabung = phi * jari * jari * 10;
    setbola = 0.5 * (1.33 * phi * jari * jari * jari);
    setin = 1.33 * phi * RSetin * RSetin * RSetin;

    rumus = ( tabung + setbola ) - setin;
    //printf("%f %f %f %f",)

    printf("maka volume bola yang tumpah adalah = %.2f",rumus);

    return 0;
}
