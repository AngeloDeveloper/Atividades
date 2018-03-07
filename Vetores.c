#include <stdio.h>
#include <stdlib.h>
int inverte();

int main()
{
   int tamanho;
   printf("Digite o tamanho \n");
   scanf("%i",&tamanho);

int *vetor1=(int*)malloc(tamanho*sizeof(int));
int *vetor2=(int*)malloc(tamanho*sizeof(int));

   for(int i=0; i<tamanho; i++)
    {
        printf("digite o valor \n");
        scanf("%i",&vetor1[i]);
        //printf("%d\n",vetor1[i]);
    }
    printf("---------\n");
    inverte(vetor1,vetor2,tamanho-1);

    for(int i=0; i<tamanho; i++)
    {
        printf("%d\n",vetor2[i]);
    }
}

void inverte(int* vet1,int*vet2, int n)
{
     for(int i=0; i<=n; i++)
     {
         vet2[i]=vet1[n-i];
     }
}
