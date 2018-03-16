// 1-) Monte um algoritmo que crie uma matriz chamada TabLetras composta de 50 elementos do tipo caracter, em seguida faca a carga da matriz, calcule e exiba a quantidade de cada vogal encontrada na matriz TabLetras.

#include <stdio.h>

void main (void) {
	int Vogais = 0, Cont;
	char TabLetras[50], Alpha;

	for (Cont = 0; Cont <= 49; Cont++) {

        fflush (stdin);
		printf ("\nInsira uma letra abaixo:\n");
		scanf ("%c", &TabLetras[Alpha]);

		if ((TabLetras[Alpha] == 'A' || TabLetras[Alpha] == 'a') || (TabLetras[Alpha] == 'E' || TabLetras[Alpha] == 'e') || (TabLetras[Alpha] == 'I' || TabLetras[Alpha] == 'i') ||
		(TabLetras[Alpha] == 'O' || TabLetras[Alpha] == 'o') || (TabLetras[Alpha] == 'U' || TabLetras[Alpha] == 'u')) {

			Vogais = Vogais + 1;
		}
	}
	printf ("\nA quantidade de vogais inseridas foram:\n%i\n\n", Vogais);
}
