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
    int baris, kolom;

    int sum=0;
    int i;

    printf(">> CETAK MATRIKS\n\n");

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

    printf("\n>> PENJUMLAHAN MATRIKS\n\n");

    for(baris=0;baris<5;baris++)
    {
        for(kolom=0;kolom<5;kolom++)
        {
            sum=array1[baris][kolom]+array2[baris][kolom];
            printf("[%d]", sum);
        }
        printf("\n");
    }

    printf("\n>> PENGURANGAN MATRIKS\n\n");
    for(baris=0;baris<5;baris++)
    {
        for(kolom=0;kolom<5;kolom++)
        {
            sum=array1[baris][kolom]-array2[baris][kolom];
            printf("[%d]", sum);
        }
        printf("\n");
    }

    printf("\n>> PERKALIAN MATRIKS\n\n");


    int array3[baris][kolom];

    for(baris=0;baris<5;baris++)
    {
        for(kolom=0;kolom<5;kolom++)
        {
            array3[baris][kolom]=0;
            for(i=0;i<5;i++)
            {
                array3[baris][kolom]+=array1[baris][i]*array2[i][kolom];
            }
            printf("[%d]", array3[baris][kolom]);
        }
        printf("\n");
    }


    return 0;
}
