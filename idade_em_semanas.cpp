//14:-) Faça um algoritmo que receba o ano de nascimento de uma pessoa e o ano atual. Calcule e exiba:
//	A idade dessa pessoa;
//	Essa idade convertida em semanas.
#include <stdio.h>
#include <locale.h>

int main(){
	
	float idade, ano_nas, ano_at, semana;
	
	printf("Insira o seu ano de nascimento: ");
	scanf("%f", &ano_nas);
	
	printf("\nInsira o ano atual: ");
	scanf("%f", &ano_at);
	
	idade = ano_at - ano_nas;
	printf("\nIdade: %.f", idade);
	
	//1 Anos = 52.1786 Semanas || 365 / 7 = 52,143.
	semana = idade * 365/7;
	printf("\n\nIdade convertida em semanas: %.f anos convertido em %.f semanas.\n", idade, semana);
	
}
