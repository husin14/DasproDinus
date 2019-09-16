#include<stdio.h>
#include<stdlib.h>

// Nama = Husin Sufi
// NIM = A11.2018.10909
// Kelompok = A11.4102

int main()
{
    int array1[5][5]={
       {1,3,3,2,1},
        {1,4,6,9,3},
        {1,6,2,4,5},
        {1,5,4,8,1},
        {1,9,3,7,4},
    };

    int array2[5][5]={
        {1,0,6,3,1},
        {2,7,3,5,9},
        {3,8,6,3,4},
        {4,2,4,3,4},
        {5,4,4,5,1},
    };

    int hasil[5][5];
    int baris, kolom, valid;
    valid=0;

    printf("\t\t\tCETAK MATRIKS\n\n");

    for(baris=0;baris<5;baris++)
    {
        for(kolom=0;kolom<5;kolom++)
        {
            printf("[%d]", array1[baris][kolom]);
        }
        printf("\n");
    }
    puts(" ");

    for(baris=0;baris<5;baris++)
    {
        for(kolom=0;kolom<5;kolom++)
        {
            printf("[%d]", array2[baris][kolom]);
        }
        printf("\n");
    }
    puts(" ");

    printf("--------------------------------------\n");
    printf("APAKAH MATRIKS 1 DAN MATRIKS 2 SAMA??\n\n");
    for(baris=0;baris<5;baris++)
    {
        for(kolom=0;kolom<5;kolom++)
        {
            if(array1[baris][kolom]!=array2[baris][kolom])
            {
                valid=1;
                break;
            }
        }
    }
    if(valid==0)
    {
        printf("Matriks A sama dengan Matriks B\n");
    }
    else
    {
        printf("Matriks A tidak sama dengan Matriks B\n");
    }
    printf("--------------------------------------\n");

    return 0;
}
