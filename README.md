# git2
Trabalho pra terça

#include <stdio.h>
#include <stdlib.h>

int randvet()
{
    int i;
    int vet[1000];
    for(i=0;i<1000;i++)
        vet[i]=rand();
    return vet[1000];
}
void printvet(int vet[],int n)
{
    int i;
        for(i=0;i<n;i++)
            printf("[%d] %d, ", i,vet[i]);
}
void mediavet(int vet[],int n)
{
    int i, med=vet[0];
    for(i=1;i<n;i++)
        med=(med+vet[i])/n;
    printf("\nMedia: %d", med);
}
void Mvet(int vet[], int n)
{
    int i,M=vet[0];
    for(i=1;i<n;i++)
    {
        if(vet[i]>M)
            M=vet[i];
    }
    printf("\nMaior valor presente no vetor: %d", M);
}
void mvet(int vet[],int n)
{
        int i,m=vet[0];
    for(i=1;i<n;i++)
    {
        if(vet[i]<m)
            m=vet[i];
    }
    printf("\nMenor valor presente no vetor: %d", m);
}
int main()
{
    int vet[1000];
    vet[1000]=randvet();
    printvet(vet,1000);
    mediavet(vet,1000);
    Mvet(vet,1000);
    mvet(vet,1000);
    return 0;
}
