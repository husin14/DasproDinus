#include <stdio.h>
#include <stdlib.h>
    /*Nama : Husin Sufi
  NIM  : A11.2018.10909
  Kelas: A11.4012
*/

int main()
{
int i;
float jumlah_kg=0,jumlah_telur_perbulan,jumlah_telur=0,jumlah_telur_perhari,keuntungan=0;
jumlah_telur_perhari=3*3;
jumlah_telur_perbulan=jumlah_telur_perhari*30;
for(i=3;i<=20;i++){
printf("bulan ke :%d= %.0f butir %.2f kg  keuntungan perbulan:Rp.%.0f \n",i,jumlah_telur,jumlah_kg,keuntungan);
jumlah_telur=jumlah_telur+jumlah_telur_perbulan;
jumlah_kg=jumlah_telur/12;
keuntungan=(jumlah_kg*14500)-200000;
}
return 0;
}
