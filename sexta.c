#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{
	int n
	,soma;

	printf("bem vindo ao infectoide o bacteriano\n");
	scanf("%i",&n);
	int i;

	for (i = 1; i < n; i++)
	{
		soma= pow(3,i);
		if(soma>=n)
		break; 
	}


	printf("o tempo minimo é %i \n",i );



	return 0;
}