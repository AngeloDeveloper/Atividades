#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double fatorial(int numero)
{
	return (numero<2) ? 1:numero*(fatorial(numero-1));
}

int main()
{
	
	int x,i;
	double result=0;

	printf("escreva o numero que vc quer o seno \n");
	scanf("%i",&x);


	for (i = 0; i <= 10; i++)
	{
		printf(" o fatorial ta assim %lf estamos no 2*n+1 valendo %i \n",fatorial(2*i+1),2*i+1);

		result+= pow(-1,i)* pow(x,2*i+1)/fatorial(2*i+1);
	}

printf("%lf \n",result );

return 0;
}

