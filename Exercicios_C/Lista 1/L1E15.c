// 15 -) Construa um algoritmo que receba uma temperatura em Celsius, calcule e mostre essa temperatura em Fahrenheit. Considere que: F = 180 * (C +32) / 100.

#include <stdio.h>

void main (void) {
	float Celsius, Fahr;
	
	printf ("Por favor, insira o valor da temperatura em Celsius: \n");
	scanf ("%f", &Celsius);
	
	Fahr = 180 * (Celsius + 32) / 100;
	
	printf ("\nTemperatura em Fahrenheit: \n%.2f", Fahr);
}