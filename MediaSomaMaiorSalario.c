#include <stdio.h>

int main ()
{
	float salario, maiorS, somaS, mediaS;
	int cont;
	maiorS = 0;
	somaS=0;
	for (cont=1;cont<=4;cont++)
	{
		printf("Digite o sal�rio: \n");
		scanf(" %f",&salario);
		somaS = somaS + salario;
		if(salario > maiorS)
		{
			maiorS = salario;
		}
			
	}
		mediaS = somaS / 4;
		printf("O maior sal�rio � = %.2f \n", maiorS);
		printf("A m�dia dos sal�rio � = %.2f \n", mediaS);
		return 0;
}
