#include <stdio.h>

int main (void)
{
	int vet[100],posicao;
	for (posicao=0;posicao<100;posicao++)
	{
		scanf ("%d",&vet[posicao]);
	}
	for (posicao=99;posicao>=0;posicao--)
	{
		printf ("%d \n",vet[posicao]);
	}
 return 0;	
}

