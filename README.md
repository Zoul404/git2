# git2
Trabalho pra terça

#include <stdio.h>
#include <stdlib.h>

int randvet()
{
    int i;
    int vet[1000];
    for(i=0;i<1000;i++)
    {
        vet[i]=rand();
        printf("%d, ",vet[i]);
    }
    return vet[1000];
}
void printvet(int vet[],int n)
{
    int i;
        for(i=0;i<n;i++)
            printf("[%d] %d, ", i,vet[i]);
}
int main()
{
    int vet[1000];
    vet[1000]=randvet();
    printvet(vet,1000);
    return 0;
}
