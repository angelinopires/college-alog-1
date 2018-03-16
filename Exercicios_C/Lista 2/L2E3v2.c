// 3 - ) Construa um algoritmo que receba a altura e o sexo de uma pessoa e que calcule e mostre seu peso ideal, utilizando as seguintes formulas: Para homens -> (72,7 * h) - 58; Para mulheres -> (62,1 * h) -44,7.

#include <stdio.h>

void main(void) {
	
	float Altura, Peso;
	char Sexo[1]; // 1 representa a quantidade de espacos na string usada. No caso 1 letra apenas. Acima de 1, precisamos declara n+1.
	
	printf ("Por favor, informe sua altura abaixo: \n");
	scanf ("%f", &Altura);
	
	printf ("\nAgora informe seu sexo. Digite M para masculino, e F para feminino\n");	
	scanf ("%s", &Sexo); // Utilizar %s para declarar char, usado como string
	
	Peso = 0;
	
	if (strcmp(Sexo, "M") == 0 || strcmp(Sexo, "m") == 0){
		Peso = (72.7 * Altura) - 58;
		printf ("\nSeu peso: %.2f\n\n", Peso);
		
	}else {
		if (strcmp(Sexo, "F") == 0 || strcmp(Sexo, "f") == 0){
		Peso = (62.1 * Altura) - 44.7;
		printf ("\nSeu peso: %.2f\n\n", Peso);
		
		}else {
			printf ("\nValor incorreto, inform M para masculino ou F para feminino.\n\n");
		}
	}
}