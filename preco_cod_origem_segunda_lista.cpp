/*8:-) Fa�a um algoritmo que receba o pre�o de um produto e o seu c�digo de origem e exiba a proced�ncia. A proced�ncia obedece a seguinte tabela:
C�digo de Origem	Proced�ncia
1	Sul
2	Norte
3	Leste
4	Oeste
5 ou 6	Nordeste
7, 8 ou 9	Sudeste
10 at� 20	Centro-Oeste
21 at� 30	Noroeste
*/
#include <stdio.h>
#include <locale.h>

int main(){

	setlocale (LC_ALL,"Portuguese");
	
	float preco, c_origem;
	
	printf("Insira o pre�o do produto: ");
	scanf("%f", &preco);
	
	printf("Insira o c�digo de origem: ");
	scanf("%f", &c_origem);
	
	if (c_origem == 1){
		printf("\nA proced�ncia � do SUL. Pre�o: R$ %.2f reais.", preco);
	}
	else if(c_origem == 2){
		printf("\nA proced�ncia � do NORTE. Pre�o: R$ %.2f reais.", preco);
	}
	else if(c_origem == 3){
		printf("\nA proced�ncia � do LESTE. Pre�o: R$ %.2f reais.", preco);
	}
	else if(c_origem == 4){
		printf("\nA proced�ncia � do OESTE. Pre�o: R$ %.2f reais.", preco);
	}
	else if(c_origem >= 5 && c_origem <= 6){
		printf("\nA proced�ncia � do NORDESTE. Pre�o: R$ %.2f reais.", preco);
	}
	else if(c_origem >= 7 && c_origem <= 9){
		printf("\nA proced�ncia � do SUDESTE. Pre�o: R$ %.2f reais.", preco);
	}
	else if(c_origem >= 10 && c_origem <= 20){
		printf("\nA proced�ncia � do CENTRO=OESTE. Pre�o: R$ %.2f reais.", preco);
	}
	else (c_origem >= 21 && c_origem <= 30);{
		printf("\nA proced�ncia � do NOROESTE. Pre�o: R$ %.2f reais.", preco);
	}
}
