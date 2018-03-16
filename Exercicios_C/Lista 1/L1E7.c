// 7 - ) Construa um algoritmo que tenha como entrada de dados, um número inteiro fromado por 4 algarismos. Ao final, calcule e exiba a somatoria dos algarismos que representam o numero.

#include <stdio.h>

void main (void) {
	
	int Num4, M, C, D, U, Soma;
	
	printf ("Insira um numero inteiro de no maximo 4 algarismos abaixo: \n");
	scanf ("%i", &Num4);
	
	M = Num4 / 1000;
	C = (Num4 % 1000) / 100;
	D = (Num4 % 100) / 10;
	U = Num4 % 10;
	
	Soma = M+C+D+U;
	
	printf ("\nValor da soma dos 4 algarismos: \n" "%i", Soma);
}