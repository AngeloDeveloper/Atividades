#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[])
{
	FILE *arquivo= fopen("lista.txt","a+");

	char nome[100];


	if(arquivo==NULL)
	{
		printf("arquivo mega bugado do cacete\n");
		return 0;
	}

	printf("digite o nome da pessoa \n");
	scanf(" %[^\n]s",&nome);

	fprintf(arquivo, "%s\n\n",nome );

	fclose(arquivo);



	return 0;
}