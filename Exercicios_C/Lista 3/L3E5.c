// 5 -) Construa um algoritmo que a partir do plano cartesiano representado pelos eixos X e Y faça a entrada das coordenadas X e Y de um ponto, e em seguida exiba o quadrante (Q1, Q2, Q3, Q4) que o ponto se encontra. Caso o ponto esteja na origem, exibir a mensagem "Origem". Caso o ponto esteja no eixo X, exibir a mensagem "Eixo X", e para Y respectivamente.

#include <stdio.h>

void main (void) {
	float X, Y;

	printf ("Insira o valor de X abaixo: \n");
	scanf ("%f", &X);

	printf ("\nInsira o valor de Y abaixo: \n");
	scanf ("%f", &Y);

	if (X == 0 && Y == 0) {
		printf ("\nO ponto se encontra no ponto Origem.\n\n");

	}else {
		if (X != 0 && Y == 0) {
			printf ("\nO ponto se encontra no Eixo X.\n\n");
		}

		if (Y != 0 && X == 0) {
			printf ("\nO ponto se encontra no Eixo Y.\n\n");
		}

		if (X > 0 && Y > 0) {
			printf ("\nO ponto se encontra no Quadrante 1.\n\n");
		}

		if (X < 0 && Y > 0) {
			printf ("\nO ponto se encontra no Quadrante 2.\n\n");
		}

		if (X < 0 && Y < 0) {
			printf ("\nO ponto se encontra no Quadrante 3.\n\n");
		}

		if (X > 0 && Y < 0) {
			printf ("\nO ponto se encontra no Quadrante 4.\n\n");
		}
	}
}