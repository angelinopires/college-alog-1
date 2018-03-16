// 6 - ) Construa um algoritmo que faca a entrada de um numero formado por quatro algarismos. Calcula e exiba: A soma dos algarimos pares; A soma dos algarismos impares.

#include <stdio.h>

void main (void) {
	int Numero, M, D, C, U, Par, Impar;
	
	printf ("Por favor, informe um numero inteiro positivo e de no maximo 4 digitos abaixo: \n");
	scanf ("%i", &Numero);
	
	if (Numero < 0 || Numero > 9999) {
		printf ("\nNumero invalido, insira apenas numeros positivos de ate 4 digitos.\n\n");
		
	}else {
		
		M = Numero / 1000; // Descobre a Unidade de milhar
		C = (Numero % 1000) / 100; // Descobre a centena
		D = (Numero % 100) / 10; // Descobre a dezena
		U = Numero % 10; // Descobre a Unidade
		
		Par = 0; // Como iremos somar valores dentro dos ifs, temos que dizer que essas variaveis serao 0.
		Impar = 0;
		
		if (M % 2 = 0) {
			Par = M;	
		}else {
			Impar = M;
		}
		
		if (C % 2 = 0) {
			Par = Par + C;
			
		}else {
			Impar = Impar + C;
		}
		
		if (D % 2 = 0) {
			Par = Par + D;
			
		}else {
			Impar = Impar + D;
		}
		
		if (U % 2 = 0) {
			Par = Par + U;
			
		}else {
			Impar = Impar + U;
		}
		
		// Validacao acima para cada numero, somando nas proprias variaveis e sendo levada ate o fim do codigo.
		printf ("\nSoma dos Pares: %i; Soma dos Impares: %i.\n\n", Par, Impar);
	}
}