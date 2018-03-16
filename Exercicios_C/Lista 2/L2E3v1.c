// 3 - ) Construa um algoritmo que receba a altura e o sexo de uma pessoa e que calcule e mostre seu peso ideal, utilizando as seguintes formulas: Para homens -> (72,7 * h) - 58; Para mulheres -> (62,1 * h) -44,7.

#include <stdio.h>

void main (void) {
	
	float Altura, Peso;
	char Sexo;
	
	printf ("\nInforme seu sexo. Digite M para masculino, ou F para feminino: \n");
	scanf ("%c", &Sexo)
	
	printf ("Por favor, informe sua altura abaixo: \n");
	scanf ("%f", &Altura);
	
	if (Sexo == 'M' || Sexo == 'm') {
		Peso = (72.7 * Altura) - 58;	
		printf ("\nSeu peso: %.2f\n\n", Peso)
		
	}else {
		if(Sexo == 'F' || Sexo == 'f') {
		Peso = (62.1 * Altura) - 44.7;	
		printf ("\nSeu peso: %.2f\n\n", Peso)
		
		}else {
			printf ("\nPor favor, informe M para o sexo masculino ou F para o sexo feminino.\n\n");
		}
	}
}