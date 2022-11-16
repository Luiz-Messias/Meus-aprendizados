#include <stdio.h>

int main(){
	
	int n1, n2;
	
	printf("Insira o primeiro numero:\n");
	scanf("%d", &n1);
	
	printf("Insira o segundo numero:\n");
	scanf("%d", &n2);
	
	if(n1 == n2)
		printf("%d e igual a %d.", n1, n2);
	else{ 
		if (n1 > n2)
		    printf("%d maior valor e %d menor", n1, n2);
		else
		    printf("%d maior valor e %d menor\n", n2, n1);
	}
}
