/*2:-) Fa�a um algoritmo que calcule e exiba o sal�rio reajustado de um funcion�rio de acordo com a seguinte regra:
"	sal�rios at� 300, reajuste de 50%;
"	sal�rios maiores que 300, reajuste de 30%.
*/
#include <stdio.h>
#include <locale.h>

int main(){

	setlocale (LC_ALL,"Portuguese");
	
	float salario, reajuste, aumento;
	
	printf("******REAJUSTE SAL�RIO ******");
	printf("\n\nInsira o seu sal�rio: R$ ");
	scanf("%f", &salario);
	
	if (salario < 300){
		reajuste = salario * 50/100;
		aumento = salario + reajuste;
		printf("\nSeu sal�rio foi reajustado de R$ %.2f reais para R$ %.2f reais.\nValor do reajuste: R$ %.2f reias", salario, aumento, reajuste);
	}
	else{
		reajuste = salario * 30/100;
		aumento = salario + reajuste;
		printf("\nSeu sal�rio foi reajustado de R$ %.2f reais para R$ %.2f reais.\nValor do reajuste: R$ %.2f reias", salario, aumento, reajuste);
	}
}
