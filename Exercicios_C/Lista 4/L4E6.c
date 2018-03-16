// 6-) Monte uma algoritmo que tenha como entrada de dados um número inteiro e em seguida calcule e exiba um número inteiro que representa o inverso do número informado. Utilize o recurso da divisão inteira. Exemplo: Entrada: 34712 Saída: 21743

#include <stdio.h>

void main (void) {
	int Numero, Invertido;
	
	printf ("Insira um numero abaixo: \n");
	scanf ("%i", &Numero);
	
	Invertido = 0;
	
	while (Numero > 0) { 
		Invertido = Invertido * 10 + Numero % 10;
		Numero = Numero / 10;
	}
	
	printf ("\nO inverso do numerio indicado foi:\n%i", Invertido);
}