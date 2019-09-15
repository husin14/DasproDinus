#include <stdio.h>
#include <stdlib.h>

 /*Nama : Husin Sufi
  NIM  : A11.2018.10909
  Kelas: A11.4012
  Tugas no 3 membuat program menghitung selisih waktu keterlambatan mahasiswa dalam satuan detik
*/
int main()
{
    //kamus
     int jam;
     int menit;
     int detik;
     int A;
     int B;
     int menit_masuk;
     int jam_masuk;
     int detik_masuk;
     int selisih_waktu;

     //Algotitma

    printf("============Menghitung Keterlambatan Mahasiswa Dalam Hitungan Detik============\n\n");

    printf("Masukkan jam masuk mahasiswa = "); scanf("%d", &jam_masuk);
    printf("Masukkan menit masuk mahasiswa = "); scanf("%d", &menit_masuk);

    A = jam_masuk * 60;
    detik_masuk = (A + menit_masuk) * 60;

    puts("----------------------------------------------");

    printf("Masukkan jam kehadiran mahasiswa = "); scanf("%d", &jam);
    printf("Masukkan menit kehadiran mahasiswa = "); scanf("%d", &menit);

    B = jam * 60;
    detik = (B + menit) * 60;

//    printf("\n\n---------------------------------------------\n\n");

//    printf("menunjukkan detik masuk = %d sekon\n", detik_masuk);
//    printf("menunjukkan detik kehadiran = %d sekon\n", detik);
    puts("----------------------------------------------\n");
    selisih_waktu =  detik - detik_masuk;
    printf("Jadi, Mahasiswa terlambat selama %d detik", selisih_waktu);
    printf("\n---------------------------------------------");
    return 0;
}
