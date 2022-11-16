#include <stdio.h>

#define texto "Calculo para a media."

int main()
{
	float n1, n2, n3, n4, resultado;
	
	printf("%s\n\n", texto);
			
	printf("Insira a nota do aluno, sobre trabalhos:\n");
	scanf("%f", &n1);
	
	printf("\nInsira a nota do aluno, sobre vistos no caderno:\n");
	scanf("%f", &n2);
	
	printf("\nInsira a nota do aluno, sobre participaçao:\n");
	scanf("%f", &n3);
	
	printf("\nInsira a nota do aluno, sobre a prova:\n");
	scanf("%f", &n4);
	
	resultado = ( n1+ n2+ n3+ n4)/4;

		printf("\nNota do bimestre: %.2f\n\n", resultado);
if (resultado>=7)   
	printf("aprovado");
	
	else  
	printf("reprovado");
}