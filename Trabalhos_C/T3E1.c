#include <stdio.h>

void main (void) {

	// Podemos zerar variaveis na propria declaracao
	int Contador, Idade, QtdeB = 0, Maior = 0, Menor = 0, Mulheres = 0;
	char Sexo, Opiniao;
	float Porcentagem;

	for (Contador = 1; Contador <= 100; Contador++) {
		
		// fflush na primeira instrucao porque e um for
        fflush (stdin);
		printf ("\n\nInsira o seu sexo. (M para masculino ou F para feminino): \n");
		scanf ("%c", &Sexo);

		printf ("\nInsira sua idade abaixo: \n");
		scanf ("%i", &Idade);

		fflush (stdin);
		printf ("\nInsira sua Opiniao abaixo (O-Otimo B-Bom R-Regular): \n");
		scanf ("%c", &Opiniao);

		if (Opiniao == 'B' || Opiniao == 'b') {
			QtdeB ++;
		}

		// Apontador da maior idade
		if (Opiniao == 'O' || Opiniao == 'o' && Idade > Maior) {
				Maior = Idade;
		}

		// Apontador da menor idade, que na primeira verificacao joga o valor da idade na var menor
		if (Opiniao == 'R' ||  Opiniao == 'r') {
			if (Menor == 0) {
				Menor = Idade;
			}

			if (Idade < Menor) {
				Menor = Idade;
			}
		}

		// Apontador especifico, como o for e feito 100x nao precisamos trabalhar no fim pra ter uma porcentagem
		if ((Sexo == 'F' || Sexo == 'f') && (Idade >= 18 && Idade <= 25) && (Opiniao == 'R' || Opiniao == 'r')) {
			Mulheres ++;
		}
	}
	
	Porcentagem = Mulheres / 100;
	printf ("\nA quantidade de opinioes boas foram:\n%i\n", QtdeB);
	printf ("\nA porcentagem de mulheres entre 18 e 25 que votaram regular foi:\n%.2f por cento\n", Porcentagem);
	printf ("\nA maior idade pesquisada que votou otimo foi:\n%i\n", Maior);
	printf ("\nA menor idade pesquisada que votou regular foi:\n%i\n", Menor);
}
