#include <stdio.h>
#include <stdlib.h>

int main() {
	float num1, num2, result;
	
	printf("Calculadora sem n�meros negativos");
	
	printf("\n Digite o primeiro valor: \t");
	scanf("%f", &num1);
		if(num1 < 0){
			printf("Valor inv�lido");
			printf("\n Digite o primeiro valor: \t");
			scanf("%f", &num2);
		}
	printf("\n Digite o segundo valor: \t");
	scanf("%f", &num2);
		if(num2 < 0){
			printf("Valor inv�lido");
			printf("\n Digite o segundo valor: \t");
			scanf("%f", &num2);
		}
		result= num1+num2;
		
		printf("A soma dos n�meros �: %f", result);
	
return 0;
}
