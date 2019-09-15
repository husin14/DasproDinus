#include <stdio.h>
#include <stdlib.h>

    /*Nama : Husin Sufi
  NIM  : A11.2018.10909
  Kelas: A11.4012
*/


int main()
{
int i,j,k;
printf("perulangan menggunakan for:\n");
for(i=0;i<=127;i++){
printf("angka %d:    ASCII:%c\n",i,i);
}
printf("perulangan menggunakan while:\n");
j=0;
while(j<=127){
printf("angka %d:    ASCII:%c\n",j,j);
j++;
}
printf("perulangan menggunakan do-while\n");
k=0;
do
{
printf("angka %d:   ASCII:%c\n",k,k);
k++;
}
while(k<=127);
return 0;
}
