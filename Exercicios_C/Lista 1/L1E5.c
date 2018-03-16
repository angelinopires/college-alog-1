// 5 - ) Construa um algoritmo que receba o peso de uma pessoa em quilos, calcule e mostre esse peso em gramas.

#include <stdio.h>

void main (void)
{
	float PesoKg, PesoGr;
		
	printf ("Por favor, digite seu peso em quilos: \n");
	scanf ("%f", &PesoKg);
		
	PesoGr = PesoKg * 1000;
		
	printf ("\nSeu peso em gramas: " "%.2f", PesoGr);
}