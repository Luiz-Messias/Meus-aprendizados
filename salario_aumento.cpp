//11:-) Faça um algoritmo que receba o salário de um funcionário, calcule e imprima o 
//novo salário sabendo-se que este sofreu um aumento de 25%, e também, o salário anterior e o reajuste, separadamente.
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"portuguese");
	
	float sal, nov_sal, reajuste;
	
	printf("Insira o seu salario: ");
	scanf("%f", &sal);
	
	nov_sal = sal * 25/100;
	printf("\nO aumento do salario: R$ %.f", nov_sal);
	
	reajuste = sal + nov_sal;
	
	printf("\n\nSalario anterior: R$ %.f reias", sal);
	printf("\n\nO novo salario: R$ %.f reais.", reajuste);
	
	
}
