//11:-) Fa�a um algoritmo que receba o sal�rio de um funcion�rio
//calcule e imprima o novo sal�rio sabendo-se que este sofreu um aumento de 25%, e tamb�m, o sal�rio anterior e o reajuste, separadamente.
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
