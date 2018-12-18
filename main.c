#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c, max, min ;
    printf("++++++++PROGRAM MENENTUKAN ANGKA TERBESAAR DARI 3 BILANGAN+++++++++\n");
    printf("===================================================================\n");
    printf("Masukkan Angka ke 1 : ");
    scanf ("%d",&a);
    printf("Masukkan Angka Ke 2 : ");
    scanf ("%d",&b);
    printf("Masukkan Angka Ke 3 : ");
    scanf ("%d",&c);

    if (a>b) { max=a; min=b;}
    else
    {
        max=b; min=a;

    }
    if (c>max) max=c;
    if (c<min) min=c;
    printf("\nBilangan Terbesar Adalah : %d\n",max);
    printf("\nBilangan Terkecil Adalah : %d\n",min);
    getch();
    return 0;
}
