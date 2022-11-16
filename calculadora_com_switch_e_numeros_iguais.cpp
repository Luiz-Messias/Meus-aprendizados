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
	
	printf("\nEscolha a opção que deseja:\n\n1 - Soma.\n2 - Subtração.\n3 - Multiplicação.\n4 - Subtração.\n\nOpção escolhida: ");
	scanf("%d", &op);
	
	switch(op){
		case 1:
			resultado = n1 + n2;
			printf("\nO resultado da soma é: %.f.\n", resultado);
			break;
			case 2:
				resultado = n1 - n2;
				printf("\nO resultado da subtração é: %.f", resultado);
				break;
				case 3:
					resultado = n1 * n2;
					printf("\nO resultado da multiplicação é: %.f", resultado);
					break;
					case 4:
						resultado = n1 / n2;
						printf("\nO valor da divisão é: %.f", resultado);
						break;				
	}
	if(n1 == n2){
		printf("\n\nOs numeros são iguais!");
	}
	else 
		printf("\n\nOs numeros são diferentes!");
	
	
	
	
	
	
	
	
}
