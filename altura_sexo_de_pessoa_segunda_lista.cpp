/*6:-) Faça um algoritmo que receba a altura e o sexo de uma pessoa, calcule e exiba o seu peso ideal, utilizando as seguintes fórmulas:
"	Para homens: (72.7 * altura) - 58;
"	Para mulheres: (62.1 * altura) - 44.7.
*/
#include <stdio.h>
#include <locale.h>

int main(){

	setlocale (LC_ALL,"Portuguese");
	
	float altura, peso, sex;
		
	printf("Insira sua ALtura: ");
	scanf("%f", &altura);
	
	printf("\n1 - PARA MASCULINO.\n2 - PARA FEMININO.\n\nOpção: ");
	scanf("%f", &sex);
	
	if(sex == 1){
		peso = (72.7 * altura) - 58;
		printf("Seu peso ideal(MASCULINO): %.2f kg.", peso);
	}
	else if(sex == 2){
		peso = (62.1 * altura) - 44.7;
		printf("Seu peso ideal(FEMININO): %.2f kg.", peso);
	}
}
