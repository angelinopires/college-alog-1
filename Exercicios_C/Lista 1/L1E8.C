// 8- ) Construa um algoritmo que a partir de um numero inteiro formado por 4 algarismos, calcule e exiba um outro numero inteiro que representa o inverso do numero informado.

#include <stdio.h>

void main (void) {
	
	int Num4, M, C, D, U, Inverso;
	
	printf ("Para visualizar o inverso de um numero, insira um numero inteiro de no maximo 4 algarismos abaixo: \n");
	scanf ("%i", &Num4);
	
	M = Num4 / 1000;
	C = (Num4 % 1000) / 100;
	D = (Num4 % 100) / 10;
	U = Num4 % 10;
	
	Inverso = (U*1000) + (D*100) + (C*10) + M;

	printf ("\nInverso do numero solicitado: \n" "%i", Inverso \n);
}
