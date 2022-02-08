#include <stdio.h>
#include <stdlib.h>

int main () {
	float n1,n2,result;
	
	
	printf("/n Calculadora de Soma");
	
	printf(" Digite o primeiro valor: \t");
	scanf("%f", &n1);
	
	printf(" Digite o segundo valor valor: \t");
	scanf("%f", &n2);
	
	result= n1 + n2;

	if( result > 0) {
			printf("\n O valor da soma é: %f", result);
}	else {
			printf("\n Resultado negativo");
}
return 0;
	}


