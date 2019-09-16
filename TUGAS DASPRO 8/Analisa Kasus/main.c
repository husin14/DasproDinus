#include <stdio.h>
#include <stdlib.h>

// Nama = Husin Sufi
// NIM = A11.2018.10909
// Kelompok = A11.4102
///ANALISA KESALAHAN

int main()
{
    /*KAMUS*/
    int jawab, i, lagi, Benar;//deklarasi variabel

    /*ALGORITMA*/
    for(i = 1; i <= 10; i++)//looping variabel i mulai dari 1 sampai kurang dari sama dengan 10
    {
        printf(" %d + %d = ?", i , i);//statement yang akan diulang mencetak variabel i
        scanf("%d", &jawab);//memanggil variabel jawab
        if(jawab == i + i)//kondisi jika jawab sama dengan i+i
        {
            printf("Benar!\n");//statement yang akan diulang
        }
        else
        {
        printf("Salah.\n");//statement yang akan diulang
        printf("Coba Lagi.\n");//statement yang akan diulang
        Benar = 0;
        }
        /* nested for */
        for(lagi = 0; lagi < 3 && !Benar; lagi++)//looping variabel lagi mulai dari 0 sampai kurang dari 3
        {
            printf(" %d + %d = ? ", i, i);//statement yang akan diulang mencetak variabel i
            scanf("%d", &jawab);//memanggil variabel jawab
            if(jawab == i + i)//kondisi jika jawab sama dengan i+i
            {
                printf("Benar!\n");//statement yang akan diulang
                Benar = 1;
            }
        }
/* Jika jawaban masih Salah, beri tau user */
        if(!Benar)
        {
        printf("Jawabnya adalah %d.\n", i + i);//statement yang akan diulang
        Benar=1;
        }
    }
    return 0;
}
///ULASAN CARA KERJA
    ///fungsi variabel i akan melakukan pengulangan sebanyak 10 kali
    ///Jika hasil yang kita ketikkan benar, pengulangan akan dilanjutkan hingga batasnya yaitu kurang dari sama dengan 10
    ///Jika salah kita hanya bisa menjawab salah sampaii 3 kali saja
    ///Setelah 3 kali, program akan memberi tahu user jawabannya yang benar
