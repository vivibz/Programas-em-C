#include <stdio.h>

int main ()
{
		
	int num, maior, cont;
	maior = 0;
	for (cont=1;cont<=5;cont++)
	{
		
	printf("Digite um número \n");
	scanf (" %d",&num);
	if(num>maior)
	
	{
		maior = num;
	}
		
	}
		printf("O maior número digitado foi = %d \n", maior); return 0;
}
