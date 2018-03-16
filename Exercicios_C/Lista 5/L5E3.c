// 3-) Monte um algoritmo que crie uma matriz chamada TabPeso com 30 elementos do tipo Real, em seguida realize os seguintes processos: 
// Carga da Matriz TabPeso; Pesquise o maior e menor peso; Calcular a media dos pesos; Calcular a quantidade pesos acima e abaixo da media; Exibir todos os dados calculados.

#include <stdio.h>

void main (void) {

    // O contador KG dentro da matriz precisa ser inteiro, apenas a matriz precisa ser declarada como float, int ou char
	int Pessoa = 0, KG;
	float TabPeso[30], Maior = 0, Menor = 0, Media = 0;

	for (KG = 0; KG <= 29; KG++) {

		Pessoa++;
		printf ("\nInsira seu peso abaixo Pessoa %i:\n", Pessoa);
		scanf ("%f", &TabPeso[KG]);

		if (TabPeso[KG] > Maior){
			Maior = TabPeso[KG];

		}else if (Menor == 0) {
			Menor = TabPeso[KG];

		}else if (TabPeso[KG] < Menor) {
			Menor = TabPeso[KG];
		}

		Media += TabPeso[KG];
	}

	// Apenas somei tudo dentro do "for", e quanto saiu dividi pelo numero de elementos
	Media /= 30;
	printf ("\nA media das pessoas pesquisadas foi: %.2f\n", Media);
	printf ("\nO mais gordo pesa: %.2f | O mais magrelo pesa: %.2f\n\n", Maior, Menor);
	Pessoa = 0;

	// "if" basico para encontrar quem esta acima ou abaixo da media
	for (KG = 0; KG <= 29; KG++) {
		Pessoa++;
		if (TabPeso[KG] > Media) {
			printf ("\nVoce pessoa %i esta gorda, por favor emagreca.\n", Pessoa);

		}else if (TabPeso[KG] < Media) {
			printf ("\nVoce pessoa %i esta magra pra caralho, engorda logo pelo amor de deus.\n", Pessoa);

		}else if (TabPeso[KG] == Media) {
			printf ("\nTa perfeito pessoa %i, mantenha assim!\n\n", Pessoa);
		}
	}
}
