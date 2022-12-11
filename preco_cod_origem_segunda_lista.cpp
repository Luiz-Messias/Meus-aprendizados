/*8:-) Faça um algoritmo que receba o preço de um produto e o seu código de origem e exiba a procedência. A procedência obedece a seguinte tabela:
Código de Origem	Procedência
1	Sul
2	Norte
3	Leste
4	Oeste
5 ou 6	Nordeste
7, 8 ou 9	Sudeste
10 até 20	Centro-Oeste
21 até 30	Noroeste
*/
#include <stdio.h>
#include <locale.h>

int main(){

	setlocale (LC_ALL,"Portuguese");
	
	float preco, c_origem;
	
	printf("Insira o preço do produto: ");
	scanf("%f", &preco);
	
	printf("Insira o código de origem: ");
	scanf("%f", &c_origem);
	
	if (c_origem == 1){
		printf("\nA procedência é do SUL. Preço: R$ %.2f reais.", preco);
	}
	else if(c_origem == 2){
		printf("\nA procedência é do NORTE. Preço: R$ %.2f reais.", preco);
	}
	else if(c_origem == 3){
		printf("\nA procedência é do LESTE. Preço: R$ %.2f reais.", preco);
	}
	else if(c_origem == 4){
		printf("\nA procedência é do OESTE. Preço: R$ %.2f reais.", preco);
	}
	else if(c_origem >= 5 && c_origem <= 6){
		printf("\nA procedência é do NORDESTE. Preço: R$ %.2f reais.", preco);
	}
	else if(c_origem >= 7 && c_origem <= 9){
		printf("\nA procedência é do SUDESTE. Preço: R$ %.2f reais.", preco);
	}
	else if(c_origem >= 10 && c_origem <= 20){
		printf("\nA procedência é do CENTRO=OESTE. Preço: R$ %.2f reais.", preco);
	}
	else (c_origem >= 21 && c_origem <= 30);{
		printf("\nA procedência é do NOROESTE. Preço: R$ %.2f reais.", preco);
	}
}
