#include <stdio.h>
#include <stdlib.h>

    /*Nama : Husin Sufi
  NIM  : A11.2018.10909
  Kelas: A11.4012
  Tugas no 1 memperbaiki program dan sertakan analisa kesalahan
*/

int main()
{
/* kamus */
int Celcius;
int CeltoFah;
int CeltoKel;
int CeltoRea;
printf("Masukkan Jumlah Celcius\t: ");
scanf("%d",&Celcius); //menggunakan %d karena tipe datanya adalah interger sehingga menjadi= scanf("%d",&Celcius);
/* Program */
CeltoFah= Celcius * 9/5  + 32; //perhitungan perkalian harus dimulai dari celcius dahulu sehingga menjadi=  Celcius * 9/5  + 32
CeltoKel=Celcius + 273;
CeltoRea= Celcius * 4/5; // hilangkan tanda kurung dari 4/5 dan perkalian dihitung mulai celcius dahulu bukan 4/5. sehingga menjadi= Celcius * 4/5

printf("\n\n<<<<<<<<<<<<<<<<<<<< HASIL KONVERSI>>>>>>>>>>>>>>>>>>>\n\n");
printf("Dalam Skala Celcius menunjukkan : %d \n",Celcius);
printf("Bila dikonversi menjadi Fahrenheit menjadi: %d\n",CeltoFah);
printf("Bila dikonversi menjadi Kelvin menjadi\t: %d\n",CeltoKel);//menggunakan %d karena interger & urutannya itu harusnya menerangkan kelvin bukan reamur.
printf("Bila dikonversi menjadi Reamur menjadi\t: %d\n",CeltoRea); //menggunakan %d karena interger & CeltoRes diganti dengan CeltoRea karena dari awal sudah menggunakan nama CeltoRea & urutannya itu menerangkan reamur bukan kelvin.
return 0;
}

