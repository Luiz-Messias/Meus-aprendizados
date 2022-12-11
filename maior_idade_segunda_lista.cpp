/*5:-) Faça um algoritmo que receba a idade de uma pessoa e exiba, esta idade e se é de maioridade ou não.*/
#include <stdio.h>
#include <locale.h>

int main(){

	setlocale (LC_ALL,"Portuguese");
	
	float pessoa;
	
	printf("Insira sua Idade: ");
	scanf("%f", &pessoa);
	
	if (pessoa >= 18){
		printf("\nVocê tem %.f anos, é de maior idade.", pessoa);
	}
	else 
		printf("\nVocê tem %.f anos, é de menor idade.", pessoa);
}
