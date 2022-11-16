#include <stdio.h>

#define texto "Dados do Atleta"

int main()
{
	printf("%s\n", texto);
	
	int idade = 0;
	float altura = 0;
	char nome[50] = "";
	
	printf("Insira a sua idade:\n");
	scanf("%d", &idade);
	
	printf("Insira a sua altura:\n");
	scanf("%f", &altura);
	
	printf("Insira o seu nome:\n");
	scanf("%s", &nome);
	
	printf("\nDados do Atleta:\n");
	printf("\nIdade:%d\n", idade);
	printf("\nAltura:%.2f\n", altura);
	printf("\nNome:%s\n", nome);
	
	printf("\nAtleta apto a vaga, PE(ponta esquerda!)");
}