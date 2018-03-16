// 7 - ) Um numero e chamado de capiuca se ele for igual ao seu inverso. Ex 1221, 3333, etc. Construa um algoritmo que faca a entrada de um numero formado por 4 algarismo e em seguida verefique se o numero e um capiuca. Caso seja, exiba a mensagem: "O numero e capiuca".

#include <stdio.h>

void main (void) {
	int Numero, M, D, C, U, Inverso;
	printf ("Por favor, informe um numero inteiro positivo e de no maximo 4 digitos abaixo: \n");
	scanf ("%i", &Numero);
	
	if (Numero < 0 || Numero > 9999) {
		printf ("\nNumero invalido, insira apenas numeros positivos de ate 4 digitos.\n\n");
		
	}else {
		M = Numero / 1000; // Descobre a Unidade de milhar
		C = (Numero % 1000) / 100; // Descobre a centena
		D = (Numero % 100) / 10; // Descobre a dezena
		U = Numero % 10; // Descobre a Unidade
		
		Inverso = (1000 * U) + (100 * D) + (10 * C) + M;
		
		if (Numero = Inverso) {
			printf ("\nO numero indicado e Capiuca.\n\n");
			
		}else { 
			printf "\nO numero indicado nao e Capiuca.\n\n");
		} 
	}
}