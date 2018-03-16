#include <stdio.h>

void main (void) {

	float TabReal[14][14], TotalCinza = 0;
	int Coluna, Linha, ContC, ContL;

	for (Coluna = 0; Coluna <= 13; Coluna++) {
		ContC = Coluna + 1;

		for (Linha = 0; Linha <= 13; Linha++) {
			ContL = Linha + 1;

			printf ("\nInsira algum valor na Coluna |%i| e Linha |%i|:\n", ContC, ContL);
			scanf ("%f", &TabReal[Linha][Coluna]);

			// Quando se trata de coluna pintada, fazemos um if dentro da matriz para somar apenas os valores desejados
			if ((Coluna >= 0 && Coluna <= 3) && (Linha >= 4 && Linha <= 9))
				TotalCinza += TabReal[Linha][Coluna];

			// Nesse caso qualquer valor entre estas colunas seriam somados, entao apenas essa parte do "if"
			if (Coluna >= 4 && Coluna <= 9)
				TotalCinza += TabReal[Linha][Coluna];

			// Percebemos que so mudam as colunas, pois as linhas sao as mesmas na imagem dada
			if ((Coluna >= 10 && Coluna <= 13) && (Linha >= 4 && Linha <= 9 ))
				TotalCinza += TabReal[Linha][Coluna];
		}
	}
	printf ("\nO total somado nos valores cinzas foi: %.2f\n\n", TotalCinza);
}
