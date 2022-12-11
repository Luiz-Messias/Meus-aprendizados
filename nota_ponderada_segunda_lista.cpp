/*3:-) No curso de Bacharelado em Ciência da Computação, a nota final do estudante é calculada a partir de 3 notas atribuídas respectivamente a um trabalho de laboratório, 
a uma avaliação semestral e a um exame final. As notas variam de 0 a 10 e a nota final é a média ponderada das 3 notas mencionadas. 
A tabela a seguir fornece os pesos das notas:

Laboratório      '     peso 2
Av. Semestral  '     peso 3
Exame Final    '     peso 5
***Faça um algoritmo que receba as 3 notas do estudante, calcule e imprima a média final e o conceito desse estudante. O conceito segue a tabela abaixo:
Média Final	Conceito
8.0  a  10.0	A
7.0  a  8.0	B
6.0  a  7.0	C
5.0  a  6.0	D
<  5.0	E
*/
#include <stdio.h>
#include <locale.h>

int main(){

	setlocale (LC_ALL,"Portuguese");
	
	float n1, n2, n3, media;	 
	
	printf("Insira a nota da primeira prova: ");
	scanf("%f", &n1);
	
	printf("\nInsira a nota da segunda prova: ");
	scanf("%f", &n2);
	
	printf("\nInsira a nota da segunda prova: ");
	scanf("%f", &n3);
	
	//Mp = [(N1 x P1) + (N2 x P2) + (N3 x P3) ÷ (P1 + P2 + P3).
	media = ((n1 * 2) + (n2 * 3) + (n3 * 5))/ (2 + 3 + 5) ;
	printf("\nA média do aluno: %.2f.\n", media);
	
	if (media >= 8){
		printf("\nConceito A.");
	}
	else if (media >=7 && media <= 8){
		printf("COnceito B.");
	}
	else if (media >=6 && media <=7){
		printf("Conceito C.");
	}
	else if (media >=5 && media <=6){
		printf("Conceito D.");
	}
	else{
		printf("Conceito E.");
	}
}
