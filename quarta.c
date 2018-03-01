#include <stdio.h>
#include <stdlib.h>

int verprimo(int numero)
{
    int cont=0;

	for (int i = 2; i < numero/2; i++)
	{
		if(numero%i==0)
		{
				cont++;
		}
	}

	if(cont==0)
	{
			return 1;
	}
	else
	{

			return 0;
	}
}


int main()
{

	int n, Qnumeros;
	int soma=0;

	printf("digite a sequencia de numeros \n" );
	scanf("%i",&Qnumeros);

	int vetor[Qnumeros];

	for (int i = 0; i < Qnumeros; ++i)
	{
		scanf("%i",&vetor[i]);
		
		if(verprimo(vetor[i])&& vetor[i]!=0)	
		{
			soma=soma+vetor[i];
		}	
	}
	

printf("%i\n",soma );

	return 0;
}


//verifica se o numero é primo se não retorna false eé ultilizada na fuñção para tomada de decisaõ

