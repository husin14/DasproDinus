#include <stdio.h>
#include <stdlib.h>

/*Nama : Husin Sufi
  NIM  : A11.2018.10909
  Kelas: A11.4012
  Tugas no 1 memperbaiki program dan sertakan analisa kesalahan
*/

int main()
{
    float TB,BB,BMI;

    printf("masukkan Tinggi Badan Anda (m) :"); scanf("%f",&TB);
    printf("masukkan Berat Badan Anda (kg) :"); scanf("%f",&BB);

        BMI = BB / (TB *TB);
    printf("BMI : %.2f\n",BMI);
    printf("keterangan:\n");
    if (BMI < 18)
    {
        printf("Kurus - Perbanyak Makan Karbohidrat");
    }
        else if (BMI>=18&&BMI<=25)
        {
            printf("Normal - Berat badan anda termasuk kategori ideal");
        }
        else if (BMI>=25&&BMI<=27)
        {
            printf("Kegemukan - Hindari makanan berlemak dan olahraga 2x dalam seminggu");
        }
        else if (BMI>27)
        {
            printf("Obesitas - Turunkan berat badan anda sekarang juga !!!");
        }




    return 0;
}
