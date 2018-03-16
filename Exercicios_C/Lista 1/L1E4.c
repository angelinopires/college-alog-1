// 4 - ) Construa uma aplicacao que calcule e exiba o valor a ser pago por uma duplicata em atraso, de acordo com uma taxa de juros diara calculada sobre o valor da duplicata. Considere como entrada os seguintes dados: Numero da Duplicata, Valor da Duplicata, Numero de Dias em Atraso, Taxa de Juros Diara em porcentagem (%).

#include <stdio.h>

void main (void)
{
	int Dias, NumDup;
	float ValDup, Taxa, Juros, Total;


	printf ("Por favor, digite o numero da duplicata: \n");
	scanf ("%i", &NumDup);

	printf ("\nQual o valor da duplicata em questao? \n");
	scanf ("%f", &ValDup);

	printf ("\nQual o numero de Dias em atraso? \n");
	scanf ("%i", &Dias);

	printf ("\nE por ultimo, qual o valor da Taxa de Juros diaria? \n");
	scanf ("%f", &Taxa);

	Juros = (Taxa/100) * Dias * ValDup;
	Total = ValDup + Juros;

	printf ("\nNumero da Duplicata: " "%i", NumDup);
	printf ("\nValor a Pagar: " "%.2f", Total);
}