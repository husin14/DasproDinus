#include <stdio.h>
#include <stdlib.h>

// Nama = Husin Sufi
// NIM = A11.2018.10909
// Kelompok = A11.4102

int main()
{
    int array1[5][5]={
        {2,4,7,7,1},
        {8,9,1,8,2},
        {5,3,6,3,1},
        {7,8,1,0,5},
        {2,1,3,4,9},
    };
    int baris, kolom;
    int sum=0;

    for(baris=0;baris<5;baris++)
    {
        for(kolom=0;kolom<5;kolom++)
        {
            printf("[%d]", array1[baris][kolom]);
            if(baris==kolom)
              {
                  sum=sum+array1[baris][kolom];
              }
        }
        printf("\n");
    }
     printf("\nTotal isi array : %d\n\n", sum);

    return 0;
}
