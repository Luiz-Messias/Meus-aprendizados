/*5:-) Fa�a um algoritmo que receba a idade de uma pessoa e exiba, esta idade e se � de maioridade ou n�o.*/
#include <stdio.h>
#include <locale.h>

int main(){

	setlocale (LC_ALL,"Portuguese");
	
	float pessoa;
	
	printf("Insira sua Idade: ");
	scanf("%f", &pessoa);
	
	if (pessoa >= 18){
		printf("\nVoc� tem %.f anos, � de maior idade.", pessoa);
	}
	else 
		printf("\nVoc� tem %.f anos, � de menor idade.", pessoa);
}
