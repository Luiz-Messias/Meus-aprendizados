//10:-) Fa�a um algoritmo que receba o sal�rio de um funcion�rio, calcule e exiba o valor do imposto de renda a ser pago,
// sabendo que o imposto equivale a 5% do sal�rio, e tamb�m, o valor l�quido do sal�rio a receber.
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	
	float salario, imp_renda, valor_liq;
	
	printf("Insira o seu salario: ");
	scanf("%f", &salario);
	
	imp_renda = salario * 5/100;
	printf("\n\nO valor do imposto de renda a ser pago �: %.f reais.\n", imp_renda);
	
	valor_liq = salario - imp_renda;
	printf("\n\nO seu salario atual �: R$ %.f reais.", valor_liq);
	
	
	
	
}
