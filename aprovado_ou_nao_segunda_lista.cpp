/*1:-) Faça um algoritmo que receba quatro notas de um aluno, calcule e exiba a média aritmética das notas 
e a mensagem de 'Aprovado' para a média superior ou igual a 7.0 ou a mensagem de 'Reprovado' para a média inferior a 7.0.*/
#include <stdio.h>
#include <locale.h>

int main(){

	setlocale (LC_ALL,"Portuguese");
		
	float n1, n2, n3, n4, media, resultado;
	
	printf("Insira a nota 1:");
	scanf("%f", &n1);
	
	printf("\nInsira a nota 2:");
	scanf("%f", &n2);
	
	printf("\nInsira a nota 3:");
	scanf("%f", &n3);
	
	printf("\nInsira a nota 4:");
	scanf("%f", &n4);
	
	media = (n1 + n2 + n3 + n4) / 4;
	printf("\nSua media é: %.2f.", media);
	
	if (media > 7){
		printf("\nVocê foi aprovado.");
	}
	else 
		printf("Você foi reprovado.");
}
