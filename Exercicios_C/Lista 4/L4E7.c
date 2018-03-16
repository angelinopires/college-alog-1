// 7-) Monte um algoritmo que calcule e exiba o valor dos juros obtidos, num determinado período de meses, a partir da aplicação de um valor inicial sobre uma taxa mensal em porcentagem (%). Utilize a estrutura Para .. Faça.

#include <stdio.h>

int main  () {
	float ValInicial, ValJuros, JurosFinal, Taxa;
	int Contador, Periodo;

	printf ("Insira o valor inicial da aplicacao abaixo: \n");
	scanf ("%f", &ValInicial);

	printf ("\nInsira o periodo em que foi aplicado: \n");
	scanf ("%i", &Periodo);

	printf ("\nInsira a taxa aplicada: \n");
	scanf ("%f", &Taxa);

	ValJuros = ValInicial;
	Taxa = Taxa * 0.01;

	for (Contador = 1; Contador <= Periodo; Contador++) {
		ValJuros = ValJuros + (ValJuros * Taxa);
	}

	JurosFinal = ValJuros - ValInicial;
	printf ("\nValor total de juros:\n%.2f", JurosFinal);
}
