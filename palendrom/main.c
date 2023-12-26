#include <stdio.h>
#include <stdlib.h>
#define max 40

void diziyi_oku(char oku[max])
{
    int i=0;
    scanf("%c",&oku[i]);
    while((oku[i]!='\n')&&i<=max)
    {
        i++;
        scanf("%c",&oku[i]);

    }
    oku[i]='\0';
}
int dizinin_boyu(char boy[max])
{
    int i=0;
    while(boy[i]!='\0')
    {
        i++;
    }
    return i;
}
void bosluk_gitsin(char git[max])
{
    char gitti[max];
    int i=0;
    int j=0;
    while(git[i]!='\0')
    {
        if(git[i]!=' ')
        {
            gitti[j]=git[i];
            j++;
        }
        i++;
    }
    gitti[j]='\0';
    printf("bosluk gittikten sonra dizi:\n");
    for (i=0;gitti[i]!='\0';i++)
    {
        printf("%c",gitti[i]);
    }
    printf("\n");
}

void tersine_cevir(char ters[max],char zit[max])
{
    int i=dizinin_boyu(ters)-1;  //\0 a geldikten sonra i++ oldugu icin i dizi boyundan bir fazladýr.
    int j=0;
    while(i>=0)
    {
        zit[j]=ters[i];
        j++;
        i--;
    }
    zit[j]='\0';
    printf("dizinin ters hali:\n");
    for(i=0;zit[i]!='\0';i++)
    {
        printf("%c",zit[i]);
    }
    printf("\n");
}
int palendrom(char sey[max], char ilg[max])
{
    int i=dizinin_boyu(sey);
    int j=0;
    int test;
    while(j<i)
    {
        if(sey[j]!=ilg[j])
        {
            test=0;
        }
        else
        {
           test=1;
        }

        j++;
    }
    return test;
}


int main()
{
    int boy,pal;
    char dizi[max];
    char gecici[max];
    printf("cumleyi giriniz\n");
    diziyi_oku(dizi);
    boy=dizinin_boyu(dizi);
    bosluk_gitsin(dizi);
    tersine_cevir(dizi,gecici);
    pal=palendrom(dizi,gecici);
    if(pal==1)
    {
        printf("palendromdur");
    }
    if(pal==0)
    {
        printf("palendrom degil");
    }
    return 0;
}
