// 16 -) Construa um algoritmo que receba a quantidade em dinheiro em reais que uma pessoa que vai viajar possui. Essa pessoa vai passar por varios paises e precisa converter seu dinheiro em dolares, marco alemao e libra esterlina. Sabe-se que a cotacao do dolar e de R$ 3,5. Do marco alemao R$2,8 e da libra esterlina e de R$ 4,15. O programa deve fazer as conversoes e mostra-las.

#include <stdio.h>

void main (void) {
	float Reais, Dolar, Marco, Libra;
	
	printf ("Por favor, insira abaixo quanto dinheiro em Reais voce possui: \n");
	scanf ("%f", &Reais);
	
	Dolar = Reais / 3,5;
	Marco = Reais / 2,8;
	Libra = Reais / 4,15;
	
	printf ("\nVoce possui:\n%.2f Dolares.", Dolar);
	printf ("\n\nVoce possui:\n%.2f Marcos Alemaes.", Marco);
	printf ("\n\nVoce possui:\n%.2f Libras.\n", Libra);
}