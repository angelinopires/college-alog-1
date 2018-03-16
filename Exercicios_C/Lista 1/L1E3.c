#include <stdio.h>

void main (void)
{
	float ValD, ValHosp;
	int QtdeD;
	
	printf ("Digite a quantidade de dias que ficou hospedado: \n");
	scanf ("%i", &QtdeD);
	printf ("\nDigte o valor da diaria: \n");
	scanf ("%f", &ValD);
	
	ValHosp = QtdeD * ValD; 
	
	printf ("\nO valor da sua hospedagem:\n%.2f", ValHosp);	
}