#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nama[11][30],nim[11][30];
    int semester[11][1],i,jumlah,pilihan;
    float ipk[11];
    char awal;

    puts("\t\t\tPROGRAM BEASISWA MAHASISWA");
    puts("\t\t\tisi maksismal 10 orang\n");

    printf("masukan jumlah data mahasiwa:");
    scanf("%d",&jumlah);

    for(i=0;i<jumlah;i++)
        {
            printf("1.nama:");
            fflush(stdin);
            gets(nama[i]);
            printf("2.nim:");
            fflush(stdin);
            gets(nim[i]);
            printf("3.semester:");;scanf("%d",&semester[i]);
            printf("4.IPK:");scanf("%f",&ipk[i]);
        }
        awal:
    puts("");
    printf("tampilkan mahasiswa berdasarkan:\n");
    puts("1.nama");
    puts("2.nim");
    puts("3.semester");
    puts("4.IPK");
    printf("mana yang ingin anda pilih:");
    scanf("%d",&pilihan);
    switch(pilihan)
    {
    case 1:
        for(i=0;i<jumlah;i++)
        {
            printf("%s\n",nama[i]);
        }
        break;
    case 2:
        for(i=0;i<jumlah;i++)
        {
            printf("%s\n",nim[i]);
        }
        break;
    case 3:
        for(i=0;i<jumlah;i++)
        {
            printf("%d\n",semester[i]);

        }
        break;
    case 4:
        for(i=0;i<jumlah;i++)
        {
            printf("%.2f\n",ipk[i]);
        }
        break;
    default:printf("menu tidak ada");
}

printf("ingin memilih lagi? ketik 'Y'"); scanf(" %c",&awal);

if (awal=='y'||awal=='Y')
{
    goto awal;
}
    return 0;
}



