// 3-) Receber 10 números inteiros e mostrar o dobro de cada um deles.

#include <stdio.h>

void main (void) {
	int Contador, Numero, Dobro;
	
	// Primeiro parametro indica da onde comeca o For. No segundo iremos definir quantas vezes faremos o processo. No terceiro o ritmo. No caso 1 em 1
	for (Contador = 1; Contador <= 10; Contador++){ 
		
		// Usar ++ apos uma variavel soma ela com +1
		printf ("\nInsira um numero: \n");
		scanf ("%i", &Numero);
		Dobro = 2 * Numero;
		
		printf ("\nDobro do numero indicado:\n%i.\n\n", Dobro);
	}
}