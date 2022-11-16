#include <stdio.h>

int main(){
	
	float c,f;
	
	printf("Fahrenheit:");
	scanf("%f", &f);
	
	c = ((f - 32)*5)/9;
	
	printf("Fahrenheit convertido em Celsius:%.2f", c);	
}
