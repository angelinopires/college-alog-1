#include <stdio.h>

void main (void)
{
	float Larg, Comp, Tela;
	
	printf ("Digite a largura do terreno: \n");
	scanf ("%f", &Larg);
	
	printf ("\nDigite o comprimento do terreno: \n");
	scanf ("%f", &Comp);
	
	Tela = Larg * Comp;
	
	printf ("\nA tela necessaria para o terreno:\n%.2f", Tela);

	
	
}