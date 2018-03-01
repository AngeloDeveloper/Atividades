#include <stdio.h>
#include <stdlib.h>

int fibo(int x)
{
 if(x==1)
 {

 		return 1;
 }
 else
 {
 	if(x==0)
 	{
 		return 0;
 	}
 	else
 	{
 		return fibo(x-1) + fibo(x-2);
 	}
 }

	//return x < 2 ? 1 : fibo(x-1) + fibo(x-2);
}

int main()
{
	int soma=0;

	int n;
	printf("escreva os n caracteres fibbonacci \n");
	scanf("%d",&n);
	printf("Fibo = %d\n",fibo(n));
	


	for (int i = 1; i < n; i++)
	{
		soma=soma+fibo(i);
		printf("soma recebe %i \n",fibo(i));

	}

	printf("eu printei e tu n viu %i\n",soma );

	return 0;
}