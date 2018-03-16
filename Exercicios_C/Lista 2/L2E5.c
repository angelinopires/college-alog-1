// 5 - ) Construa uma aplicacao que receba um numero inteiro e exiba uma mensagem identificando se o numero e PAR ou IMPAR. Lembre-se que todo numero par e divisivel por 2.

#include <stdio.h>

void main (void) {
	int Numero;
	
	printf ("Por favor, digite um numero maior ou igual a 0 abaixo: \n");
	scanf ("%i", &Numero);
	
	if (Numero >= 0 && Numero % 2 = 0) {
		printf ("\nNumero Par\n\n");
		
	}else {
		if (Numero >= 0) {
			printf ("\nNumero Impar\n\n");
			
		}else {
		printf ("\nNumero invalido, insira um numero maior ou igual a zero.\n\n");
		}
	}
}