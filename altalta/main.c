#include <stdio.h>
#include <stdlib.h>

int main()
{
    char dizi[100];
    printf("metni gir\n");
    gets(dizi);
    int i=0;
    while(dizi[i])
    {
        printf("%c\n",dizi[i]);
        i++;
    }
    return 0;
}
