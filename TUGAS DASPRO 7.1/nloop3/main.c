#include <stdio.h>
#include <stdlib.h>

// Nama = Husin Sufi
// NIM = A11.2018.10909
// Kelompok = A11.4102

int main()
{
    int i;
    printf("perulangan menggunakan do while\n");
i=1; //i=1 sebagai inisialisasi nilai awal
do
{
printf("perulangan ke-%d\n",i);
	i=i+1; //i++ sebagai pembaruan nilai

}
while (i<=7); //dan i<=7 sebagai batasan perulangan

    return 0;
}
