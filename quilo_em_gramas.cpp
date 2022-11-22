//13:-) Faça um algoritmo que receba o peso de uma pessoa, um valor inteiro, calcule e exiba:
//"	O peso dessa pessoa em gramas;
//"	Se essa pessoa engordar 5%, qual será seu novo peso em gramas.

#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	int peso;
	float gramas, peso_nov;
	
	printf("Insira o seu peso: ");
	scanf("%d", &peso); 
	
	gramas = peso * 1000;
	printf("\n%d kg em gramas é: %.f gramas.\n", peso, gramas);
	
	peso_nov = gramas * 5/100 + gramas;
	printf("\nSe você engordar 5 kg, seu peso novo será: %.f", peso_nov);
	
}
