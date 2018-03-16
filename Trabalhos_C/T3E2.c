#include <stdio.h>

void main (void) {
	int Tempo = 0, Minuto, Segundos, TempoF;
	float Gramas, PesoIni;

	printf ("Insira o valor da massa em KG: \n");
	scanf ("%f", &PesoIni);

	Gramas = PesoIni * 1000;

	// Apenas duas instrucoes simples dentro do while
	while (Gramas >= 0.5) {
		Tempo = Tempo + 50;
		Gramas = Gramas / 2;
	}

	// Convertendo o tempo em minutos e depois somando da forma correta para ter MMSS como formato
	Minuto = Tempo / 60;
	Segundos = Tempo % 60;
	TempoF = (Minuto * 100) + Segundos;

	printf ("\nO tempo necessario foi:\n%i\n\n", TempoF);
}
