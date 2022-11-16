#include <stdio.h>

int main ()
{ 
	float n1, n2, resultado;
	
	printf("Insira o numero:\n\n");
	scanf("%f", &n1);
	
	printf("Insira o numero:\n\n");
	scanf("%f", &n2);
	
	resultado = (n1 + n2)/2;
	
	printf("Valor da soma: %.2f\n\n", resultado);
if (resultado>=7)   
	printf("aprovado");

else 
   printf("reprovado"); 
	
	 	
}

