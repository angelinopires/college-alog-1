#include <stdio.h>

void main (void)
{
	float PrecUn, ValC;
	int QtdeV;
	
	printf ("Digite o preco unitario: \n");
	scanf ("%f", &PrecUn);
	
	printf ("\nDigite a quantidade vendida: \n");
	scanf ("%i", &QtdeV);
	
	ValC = QtdeV * PrecUn;
	
	printf ("Valor da compra: \n %.2f", ValC);

	
	
}