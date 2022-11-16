//11:-) Faça um algoritmo que receba o salário de um funcionário
//calcule e imprima o novo salário sabendo-se que este sofreu um aumento de 25%, e também, o salário anterior e o reajuste, separadamente.
#include <stdio.h>

int main(){
	
	float sal , reajuste , aumento;
	
	printf("Insira o seu salario: ");
	scanf("%f", &sal);
	
	reajuste = sal * 25/100 ;
	
	printf("\nAumento do salario: %.f ", reajuste);
	
	// Imprimir salario anterior
	printf("\n\nO salario anterior eh: %.f", sal);
	
	// salario com o aumento
	aumento = sal + reajuste;
	printf("\n\nSalario com o aumento: %.f", aumento);





	
}
