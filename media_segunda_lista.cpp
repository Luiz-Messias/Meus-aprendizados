/*10:-) Faça um algoritmo que receba três notas de um aluno, calcule e exiba a média aritmética entre essas três notas e uma mensagem que segue a tabela abaixo:
Média	Mensagem
0 |--- 5	Reprovado
5 |--- 7	Exame
7 |---| 10	Aprovado*/
#include <stdio.h>
#include <locale.h>

int main()
{

	setlocale (LC_ALL,"Portuguese");
	
	float n1, n2, n3, media;
	
	printf("Insira a nota 1:");
	scanf("%f", &n1);
	
	printf("\n\nInsira a nota 2:");
	scanf("%f", &n2);
	
	printf("\n\nInsira a nota 3:");
	scanf("%f", &n3);
	
	media = (n1 + n2 + n3) / 3;
	printf("\n\nMedia: %.2f", media);
	
	if (media <= 5){
		printf("\n\nReprovado.\n");
	}
	else if (media >= 5 && media <=7){
		printf("\n\nExame.\n");
	}
	else{
		printf("\\nnAprovado.\n");
	}
}
