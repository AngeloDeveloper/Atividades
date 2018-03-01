#include <stdio.h>
#include <stdlib.h>


int main()
{
	
	int tantodenumeros;


	scanf("%i",&tantodenumeros);

	int osnumeros[tantodenumeros];

	for (int i = 0; i < tantodenumeros; i++)
	{
		scanf("%i",&osnumeros[i]);
	}


	for (int i = tantodenumeros-1; i >= 0; i--)
	{
		printf("%i \n",osnumeros[i] );
	}


}