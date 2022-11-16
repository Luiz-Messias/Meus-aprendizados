#include<stdio.h>

int main()
{
	float n1,n2,resultado;
	int op;
	
	printf("insira o numero: \n");
	scanf("%f", &n1);
	
	printf("insira o numero: \n");
	scanf("%f", &n2);
	
	printf("\n\nAperte-1 para somar");
	printf("\n\nAperte-2 para subtrair");
	printf("\n\nAperte-3 para multilplicar");
	printf("\n\nAperte-4 para dividir \n\n");
	scanf("%d", &op);
	
	if (op == 1)
{
	resultado = n1 + n2;
	printf("\nsomar: %.f",resultado);
}
	else if (op == 2)
{
	resultado = n1 - n2;
	printf("\nsubtrair: %.f",resultado);
}
	else if (op == 3)
{
	resultado = n1 * n2;
	printf("\nmultiplicar: %.f", resultado);
}
	else if (op == 4)
{
	resultado = n1 / n2;
	printf("\ndividir: %.f", resultado);
}
}