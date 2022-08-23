#include <stdio.h>
#include <stdlib.h>

int randvet()
{
    int i;
    int vet[1000];
    for(i=0;i<1000;i++)
    {
        vet[i]=rand();
        printf(" %d, ",vet[i]);
    }
    return vet[1000];
}
int main()
{
    int vet[1000];
    vet[1000]=randvet();
    return 0;
}
