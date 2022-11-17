//9:-) Faça um algoritmo que receba a idade de uma pessoa em anos, calcule e exiba essa idade em:
//"	Meses;
//"	Dias;
//"	Horas;
//"	Minutos.
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	
	float idade, meses, dias, horas, minutos;
	
	printf("Insira sua idade em anos: ");
	scanf("%f", &idade);
	
	meses = idade * 12;
	printf("\nA idade em meses: %.f meses.", meses);
	
	dias = idade * 365;
	printf("\n\nIdade em dias: %.f dias.", dias);
	
	horas = idade * 8760;
	printf("\n\nIdade em horas: %.f horas.", horas);
	
	minutos = idade * 525600;
	printf("\n\nIdade em minutos: %.f minutos.", minutos);

	
}
