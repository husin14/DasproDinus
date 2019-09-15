#include <stdio.h>
#include <stdlib.h>
    /*Nama : Husin Sufi
  NIM  : A11.2018.10909
  Kelas: A11.4012
*/

int main()
{
int i;
for(i=1;i<100;i++){
if(i%10==0){
printf("%d\n",i+1);
}
else if(i==1||(i>11&&i<20)){
printf("%d\n",i);
}
}
return 0;
}
