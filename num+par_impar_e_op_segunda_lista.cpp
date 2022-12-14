/*9:-) Faça um algoritmo que receba dois números, verifique se estes são pares ou ímpares e exiba a mensagem sobre a situação de cada um.*/
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale (LC_ALL,"Portuguese");
	
    int n1, n2;
    float soma;
    	
	printf("Insira um numero: ");
	scanf("%d", &n1);
	
	printf("Insira um numero: ");
	scanf("%d", &n2);
		
	if (n1 % 2 == 0 ){
		printf("\nPRIMEIRO NUMERO é PAR.\n");
	}
	else{
		printf("\nPRIMEIRO NUMERO é IMPAR.\n");
	}
    if(n2 % 2 == 0){
		printf("\nSEGUNDO NUMERO é PAR.\n");
	}
	else{
		printf("\nSEGUNDO NUMERO é IMPAR.\n");
	}
	// inicio da conta da tabela
	if ( n1 % 2 == 0 && n2 % 2 == 0 ){
		soma = n1 + n2;
		printf("\nA soma dos pares é: %.f", soma);
	}
	else if ( n1 % 2 == 1 && n2 % 2 == 1 ){
		soma = n1 - n2;
		printf("\nA subtração dos impares é: %.f", soma);
	}
	else if ( n1 % 2 == 0 && n2 % 2 == 1 ){
		soma = n1 * n2;
		printf("\nA multiplicação entre par e impar é: %.f", soma);
	}
	else if ( n1 % 2 == 1 && n2 % 2 == 0 ){
		soma = n1 / n2;
		printf("\nA divisão entre impar e par é: %.f", soma);
	}
	
}
/*Além de exibir o resultado das seguintes operações, com base na tabela abaixo:
Situação	Operação entre os Números
Dois números pares	Adição
Dois números ímpares	Subtração
O primeiro ser par e o segundo ímpar	Multiplicação
O primeiro ser ímpar e o segundo par	Divisão*/
	






