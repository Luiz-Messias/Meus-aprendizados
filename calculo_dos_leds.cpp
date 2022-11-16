#include <stdio.h>
#include <stdlib.h>


float Vin  = 0.0,
      Vled = 0.0,
	  Iled = 0.0,	
      R    = 0.0;

int main (int argc, char *argv[])
{  

	printf(" LED CALC  V1.0 \n\n");
	printf(" Autor: Eng. Wargner Rambo\n\n");
	printf(" Empresa: WR Kits\n\n");
	
	printf(" Digite o valor de Vin (em volts) : ");
	scanf("%f", &Vin);
	printf("\n\n");
	printf(" Digite o valor de Vled (em volts): ");
	scanf("%f", &Vled);
	printf("\n\n");
	printf(" Digite o valor de Iled (em amperes): ");
	scanf("%f", &Iled);
	printf("\n\n");
	
	R = (Vin-Vled)/Iled;
	
	printf("Vin  = %.2f\n\n",Vin);
	printf("Vled = %.2f\n\n",Vled);
	printf("Iled = %.2f\n\n",Iled);
	printf("O resistor para o LED tem o valor de %.2f Ohms\n\n",R);
	
	
		system("PAUSE");
		return 0;
}