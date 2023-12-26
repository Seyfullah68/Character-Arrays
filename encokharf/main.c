#include <stdio.h>
#include <stdlib.h>

int main()
{
    char dizi[100];
    printf("cumleyi giriniz\n");
    gets(dizi);
    int harfler[26]={0};
    int i=0,encok=0;
    char harf;
    while(dizi[i])
    {
        if(dizi[i]<='z'&& dizi[i]>='a')
        {
            harfler[dizi[i]-'a']++;
        }
        i++;
    }
    encok=harfler[0];
    for(i=1;i<26;i++)
    {
        if(harfler[i]>encok)
        {
            encok=harfler[i];
            harf=i+'a';
        }
    }
    printf("en cok olan harf : %c , %d tane",harf,encok);
    return 0;
}
