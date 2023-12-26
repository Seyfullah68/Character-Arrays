#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0,j=0;
    char dizi[100];
    printf("angico write a text\n");
    gets(dizi);
    while(dizi[i])
    {
        j=0;
        while(j<=i)
        {
            printf("%c ",dizi[j]);
            j++;
        }
        i++;
        printf("\n");
    }
    return 0;
}
