#include <stdio.h>

void main (void) {
	char Tipo;
	float Peso, Distancia, ValEntrega;

	printf ("Escreva o tipo da encomenda que deseja enviar. T para Terrestre ou A para Aereo.\n");
	scanf ("%c", &Tipo);

	if (Tipo == 'A' || Tipo == 'a') {

		printf ("\nEscreva o peso da sua encomenda em quilos: \n");
		scanf ("%f", &Peso);

		if (Peso <= 25) {
			ValEntrega = Peso * 10.5;

		}else {
			ValEntrega = Peso * 14;
		}
		
		printf ("\nO valor da sua entrega ficou em:\n%.2f Reais.\n\n", ValEntrega);

	}else if (Tipo == 'T' || Tipo == 't') {

		printf ("\nEscreva o peso da sua encomenda em quilos: \n");
		scanf ("%f", &Peso);

		printf ("\nEscreva a distancia (Em KM) que deseja enviar sua encomenda: \n");
		scanf ("%f", &Distancia);

		if (Distancia < 50) {
			ValEntrega = Peso * 3.5;
		}

		if (Distancia >= 50 && Distancia <= 150) {
			ValEntrega = Peso * 4.5;
		}

		if (Distancia > 150) {
			ValEntrega = Peso * 6;
		}
		
		printf ("\nO valor da sua entrega ficou em:\n%.2f Reais.\n\n", ValEntrega);
	}
}
