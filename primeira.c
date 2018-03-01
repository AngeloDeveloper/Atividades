#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	float Vc,Vx,i0;
	double result;

	int op,t;

	printf("[1]Vc\n[2]Vx\n[3]I0\n");

	printf("digite a opção seguida do intervalo de tempo\n");
	scanf("%i %i",&op,&t);

	switch(op)
	{
		case 1:
			result=60*(exp((t*(-0.25))));
		break;
		case 2:
			result=20*(exp((t*(-0.25))));
		break;
		case 3:
			result=-5*(exp((t*(-0.25))));
		break;
	}
	printf("%f \n",result );


}