/*11:-) Fa�a um algoritmo que receba a idade de uma pessoa e classifique-a seguindo o crit�rio a seguir:
Idade	Classifica��o
0 a 2 anos	Rec�m-nascido
3 a 11 anos	Crian�a
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
		printf("Rec�m-nascido. (0 - 2 anos).");
	}
	else if (idade >= 3 && idade <= 11){
		printf("Crian�a. (3 = 11 anos).");
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
