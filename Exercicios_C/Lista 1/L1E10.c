// 10 - ) Faca um algoritmo que receba o ano de nascimento e o ano atual. Em seguida calcule exiba: A idade da pessoa em anos; A idade da pessoa em meses; A idade da pessoa em Dias; A idade da pessoa em semanas.

#include <stdio.h>

void main (void) {
	
	int Nasc, Atual, Anos, Meses, Dias, Semanas;
	
	printf ("Por favor, insira o ano do seu nascimento abaixo: \n");
	scanf ("%i", &Nasc);
	
	printf ("\nAgora insira o ano atual: \n");
	scanf ("%i", &Atual);
	
	Anos = Atual - Nasc;
	Meses = Anos * 12;
	Semanas = Anos * 52;
	Dias = Anos * 365;
	
	printf ("\nSua idade em anos:\n%i", Anos); // Posso colocar todas em uma unica linha, colocando %i no final de cada um e chamando todas as variaveis no final.
	printf ("\nSua idade em Meses:\n%i", Meses);
	printf ("\nSua idade em Semanas:\n%i", Semanas);
	printf ("\nSua idade em Dias:\n%i", Dias);
}