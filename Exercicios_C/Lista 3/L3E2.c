// 2 -)  O custo ao consumidor de um carro novo e a soma do custo de fabrica com a porcentagem do distribuidor e com os impostos, ambos aplicados ao custo de fabrica. Sabe-se que as porcentagens sao as mesmas que estao na tebela a seguir. Construa um algoritmo que receba o custo de fabrica de um carro e mostre o custo ao consumidor:

// Ate R$ 12000 (Inclui 12000) --> 5% do Distribuidor --> Isento de Imposto;
// Entre R$ 12000 e R$ 25000 (Inclui 25000) --> 10% do Distribuidor --> 15% de Imposto;
// Acima de R$ 25000 --> 15% do Distribuidor --> 20% de Imposto;

#include <stdio.h>

void main (void) {
	float Custo, Taxas, CustoFinal;
	
	printf ("Insira o custo de fabrica do carro abaixo: \n");
	scanf ("%f", &Custo);
	
	if (Custo <= 0) {
		printf ("\nValor invalido, tente novamente.\n\n");
		
	}else {
		if (Custo <= 12000) {
			Taxas = Custo * 0.05;
		}
		
		if (Custo > 12000 && Custo <= 25000) {
			Taxas = Custo * 0.1 + Custo * 0.15;
		}
		
		if (Custo > 25000) {
			Taxas = Custo * 0.15 + Custo * 0.2;
		}
		
		CustoFinal = Custo + Taxas;
		printf ("\nCusto final ao consumidor:\n%.2f\n\n", CustoFinal);
	}
}
