#include <stdio.h>

int main()
{
	float n1, n2, resultado;
	int op, contador;
	
	printf("calculadora.\n\n");
	
	printf("Insira um numero:\n");
	scanf("%f", &n1);
	
	printf("Insira um numero:\n");
	scanf("%f", &n2);
	
	printf("\n1- soma.\n2-subtracao.\n3-multiplicacao.\n4-divisao.\n");
	printf("\nopcao escolhida:");
	scanf("%d", &op);
	
	switch(op){
		case 1:
			resultado = n1 + n2;
			printf("\nValor da soma:%.f", resultado);
			break;
			case 2:
				resultado = n1 - n2;
				printf("\nValor da subtracao:%.f", resultado);
				break;
				case 3:
					resultado = n1 * n2;
					printf("\nValor da multiplicacao:%.f", resultado);
					break;
					case 4:
						resultado = n1 / n2;
						printf("\nValor da divisao:%.f", resultado);
						break;
						default:
							printf("\nInsira um numero valido!");				
	}
}

