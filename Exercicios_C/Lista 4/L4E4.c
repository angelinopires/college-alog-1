// 4-) Receber 10 números reais e ao final exiba a quantidade de números positivos e de números negativos.

#include <stdio.h>

void main (void) {

	float Numero;
	int Contador, QtdePositivo, QtdeNegativo;

	QtdePositivo = 0;
	QtdeNegativo = 0;

	for (Contador = 1; Contador <= 10; Contador++) {

		printf ("\nInsira um numero abaixo: \n");
		scanf ("%f", &Numero);

		if (Numero >= 0) {
			QtdePositivo++;

		} else {
			QtdeNegativo++;
		}
	}
	printf ("\nQuantidade de positivos: %i;\nQuantidade de negativos: %i\n\n", QtdePositivo, QtdeNegativo);
}