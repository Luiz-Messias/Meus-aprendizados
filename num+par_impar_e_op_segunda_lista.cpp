/*9:-) Fa�a um algoritmo que receba dois n�meros, verifique se estes s�o pares ou �mpares e exiba a mensagem sobre a situa��o de cada um.*/
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
		printf("\nPRIMEIRO NUMERO � PAR.\n");
	}
	else{
		printf("\nPRIMEIRO NUMERO � IMPAR.\n");
	}
    if(n2 % 2 == 0){
		printf("\nSEGUNDO NUMERO � PAR.\n");
	}
	else{
		printf("\nSEGUNDO NUMERO � IMPAR.\n");
	}
	// inicio da conta da tabela
	if ( n1 % 2 == 0 && n2 % 2 == 0 ){
		soma = n1 + n2;
		printf("\nA soma dos pares �: %.f", soma);
	}
	else if ( n1 % 2 == 1 && n2 % 2 == 1 ){
		soma = n1 - n2;
		printf("\nA subtra��o dos impares �: %.f", soma);
	}
	else if ( n1 % 2 == 0 && n2 % 2 == 1 ){
		soma = n1 * n2;
		printf("\nA multiplica��o entre par e impar �: %.f", soma);
	}
	else if ( n1 % 2 == 1 && n2 % 2 == 0 ){
		soma = n1 / n2;
		printf("\nA divis�o entre impar e par �: %.f", soma);
	}
	
}
/*Al�m de exibir o resultado das seguintes opera��es, com base na tabela abaixo:
Situa��o	Opera��o entre os N�meros
Dois n�meros pares	Adi��o
Dois n�meros �mpares	Subtra��o
O primeiro ser par e o segundo �mpar	Multiplica��o
O primeiro ser �mpar e o segundo par	Divis�o*/
	






