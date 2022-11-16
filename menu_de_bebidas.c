#include <stdio.h>

int main(){
	
	printf("---MENU DE BEBIDAS---");	
	int pedido, copo;
	
	printf("\n\nDigite: \n\n 1- Para White Horse. \n\n 2- Para Red Label. \n\n 3-Para combo. \n\n");
	printf("Pedido escolhido:");
	scanf("%d", &pedido);
	
	
	
	switch(pedido){
		case 1:
			printf("\nPedido de White Horse realizado com sucesso.");
			break;
		case 2:
			printf("\nPedido de Red Label realizado com sucesso.");
			break;
		case 3:
			printf("\nPedido do combo (Whisky + energetico) realizado com sucesso.");
			break;
		default:
			printf("\nNumero Invalido. Por favor insira um numero\n");
	}
	printf("\n\nAgora escolha o copo!\n");
	printf("\n1- Para o copo de 700 ml. \n2- Para o copo de 500 ml. \n3- Para balde com gelo (1,5 lt + gelo).\n\n\nCopo escolhido:");
	scanf("%d", &copo);
	
	switch(copo)
	{
		case 1:
			printf("\nCopo de 700 ml adcionado.\n");
			break;
		case 2:
			printf("\nCopo de 500 ml adcionado.\n");
			break;
		case 3:
			printf("\nBalde com gelo adicionado.\n");
			break;
		default:
			printf("Opcao errada!");
			break;
	}
	printf("\nPEDIDO REALIZADO.\n");
	
	
	
	
	
	
	
	
	
	
	
	
	
}
