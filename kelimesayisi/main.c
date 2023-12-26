#include <stdio.h>
#include <stdlib.h>

int main()
{
    int kelime=0,i=0;
    char dizi[100];
    printf("cumlenizi giriniz\n");
    gets(dizi);
    while(dizi[i])
    {
        if(dizi[i]==32)
        {
            kelime++;
        }
        i++;
    }
    printf("girdiginiz kelime sayisi %d",kelime+1);


    return 0;
}
