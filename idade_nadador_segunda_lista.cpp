/*7:-) Faça um algoritmo que receba a idade de um nadador e exiba a sua categoria seguindo as regras:
Categoria	Idade
Infantil A	5 - 7 anos
Infantil B	8 - 10 anos
Juvenil A	11 - 13 anos
Juvenil B	14 - 17 anos
Sênior	Maiores de 18 anos
*/
#include <stdio.h>
#include <locale.h>

int main(){

	setlocale (LC_ALL,"Portuguese");
	
	float idade, cate;
	
	printf("Insira sua idade: ");
	scanf("%f", &idade);
	
	if(idade >= 5 && idade <= 7){
		printf("\nInfantil A. (5 - 7 anos)");
	}
	else if(idade >= 8 && idade <= 10){
		printf("\nInfantil B. (8 - 10 anos)");
	}
	else if(idade >= 11 && idade <= 13){
		printf("\nJuvenil A. (11 - 13 anos)");
	}
	else if(idade >= 14 && idade <= 17){
		printf("\nJuvenil B. (14 - 17 anos)");
	}
	else if(idade > 18){
		printf("Sênior. (Para maiores de 18 anos)");
	} 			
}
