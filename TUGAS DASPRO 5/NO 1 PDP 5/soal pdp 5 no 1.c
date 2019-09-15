#include <stdio.h>
#include <stdlib.h>

/*Nama : Husin Sufi
  NIM  : A11.2018.10909
  Kelas: A11.4012
*/

int main()
{
char nama[20];
char nim[20];
float ipk;
int semester;
char nama_ayah[20];
char nama_ibu[20];
char pekerjaan_ayah[20];
char pekerjaan_ibu[20];
int gaji_ortu1;
int gaji_ortu2;
int total_gaji;

printf("=========PROGRAM SELEKSI BEASISWA UNIVERSITAS TERBUKA SEMARANG==============\n\n");

printf("\nNama Mahasiswa : ");
gets(nama);
printf("\nNIM : ");
gets(nim);
printf("\nIPK : ");
scanf("%.2f",&ipk);
printf("\nSEMESTER : ");
fflush(stdin);
scanf("%d",&semester);
printf("\nNama Ayah : ");
fflush(stdin);
gets(nama_ayah);
printf("\nNama Ibu : ");
fflush(stdin);
gets(nama_ibu);
printf("\nPekerjaan Ayah : ");
gets(pekerjaan_ayah);
printf("\nPekerjaan Ibu : ");
gets(pekerjaan_ibu);
printf("\nGaji Ayah Perbulan : ");
scanf("%d",&gaji_ortu1);
printf("\nGaji Ibu Perbulan : ");
scanf("%d",&gaji_ortu2);
total_gaji=(gaji_ortu1+gaji_ortu2);
if(ipk>3.00&&semester>=5&&total_gaji<3000000)
{
    puts("\n\nSELAMAT, ANDA BERHAK MENERIMA BEASISWA");
}
else
{
    puts("\n\nMAAF, ANDA BELUM DITERIMA");
}






return 0;
}
