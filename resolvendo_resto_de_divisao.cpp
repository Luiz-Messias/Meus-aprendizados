#include <stdio.h>

int main(){
	
	int n1, n2, resto, r;
	
	printf("Insira um numero: ");
	scanf("%d", &n1);
	
	printf("\nInsira um numero: ");
	scanf("%d", &n2);
	
	r = n1 / n2;
	printf("\nResultado da divisao inteira de %d / %d = %d\n", n1, n2, r);
	
	resto = n1 % 2;
	printf("\nO resto da divisao = %d", resto);
	
	return(0);
	}
