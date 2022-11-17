//10:-) Faça um algoritmo que receba o salário de um funcionário, calcule e exiba o valor do imposto de renda a ser pago,
// sabendo que o imposto equivale a 5% do salário, e também, o valor líquido do salário a receber.
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	
	float salario, imp_renda, valor_liq;
	
	printf("Insira o seu salario: ");
	scanf("%f", &salario);
	
	imp_renda = salario * 5/100;
	printf("\n\nO valor do imposto de renda a ser pago é: %.f reais.\n", imp_renda);
	
	valor_liq = salario - imp_renda;
	printf("\n\nO seu salario atual é: R$ %.f reais.", valor_liq);
	
	
	
	
}
