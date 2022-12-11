/*2:-) Faça um algoritmo que calcule e exiba o salário reajustado de um funcionário de acordo com a seguinte regra:
"	salários até 300, reajuste de 50%;
"	salários maiores que 300, reajuste de 30%.
*/
#include <stdio.h>
#include <locale.h>

int main(){

	setlocale (LC_ALL,"Portuguese");
	
	float salario, reajuste, aumento;
	
	printf("******REAJUSTE SALÁRIO ******");
	printf("\n\nInsira o seu salário: R$ ");
	scanf("%f", &salario);
	
	if (salario < 300){
		reajuste = salario * 50/100;
		aumento = salario + reajuste;
		printf("\nSeu salário foi reajustado de R$ %.2f reais para R$ %.2f reais.\nValor do reajuste: R$ %.2f reias", salario, aumento, reajuste);
	}
	else{
		reajuste = salario * 30/100;
		aumento = salario + reajuste;
		printf("\nSeu salário foi reajustado de R$ %.2f reais para R$ %.2f reais.\nValor do reajuste: R$ %.2f reias", salario, aumento, reajuste);
	}
}
