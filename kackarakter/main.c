#include <stdio.h>
#include <stdlib.h>

int main()
{
    char dizi[100];
    printf("cumleyi giriniz\n");
    gets(dizi);
    int i=0;
    while(dizi[i])
    {
        i++;
    }
    printf("karakter sayisi %d",i);
    return 0;
}
