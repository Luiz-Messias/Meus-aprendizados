/*11:-) Faça um algoritmo que receba a idade de uma pessoa e classifique-a seguindo o critério a seguir:
Idade	Classificação
0 a 2 anos	Recém-nascido
3 a 11 anos	Criança
12 a 19 anos	Adolescente
20 a 55 anos	Adulto
Acima de 55 anos	Idoso*/
#include <stdio.h>
#include <locale.h>

int main(){

	setlocale (LC_ALL,"Portuguese");
	
	float idade;
	
	printf("Insira sua idade: ");
	scanf("%f", &idade);
	
	if (idade <= 2){
		printf("Recém-nascido. (0 - 2 anos).");
	}
	else if (idade >= 3 && idade <= 11){
		printf("Criança. (3 = 11 anos).");
	}
	else if (idade >= 12 && idade <= 19){
		printf("Adoslecente. (12 - 19 anos).");
	}
	else if (idade >= 20 && idade <= 55){
		printf("Adulto. (20 - 55 anos)");
	}
	else{
		printf("Idoso. (A partir dos 55 anos).");
	} 
}
