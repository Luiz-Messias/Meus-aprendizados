#include <stdio.h>
#include <locale.h> 

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	float n1, n2, resultado;
	int op;
	
	printf("Insira um numero: ");
	scanf("%f", &n1);
	
	printf("Insira um numero: ");
	scanf("%f", &n2);
	
	printf("\nEscolha a op��o que deseja:\n\n1 - Soma.\n2 - Subtra��o.\n3 - Multiplica��o.\n4 - Subtra��o.\n\nOp��o escolhida: ");
	scanf("%d", &op);
	
	switch(op){
		case 1:
			resultado = n1 + n2;
			printf("\nO resultado da soma �: %.f.\n", resultado);
			break;
			case 2:
				resultado = n1 - n2;
				printf("\nO resultado da subtra��o �: %.f", resultado);
				break;
				case 3:
					resultado = n1 * n2;
					printf("\nO resultado da multiplica��o �: %.f", resultado);
					break;
					case 4:
						resultado = n1 / n2;
						printf("\nO valor da divis�o �: %.f", resultado);
						break;				
	}
	if(n1 == n2){
		printf("\n\nOs numeros s�o iguais!");
	}
	else 
		printf("\n\nOs numeros s�o diferentes!");
	
	
	
	
	
	
	
	
}
