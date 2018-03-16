// 2 - ) Uma agencia bancaria possui dois tipos de investimentos, conforme o quadro a seguir. Construa um algoritmo que receba o tipo de investimento e o valor do investimento e que calcule e mostre o valor corrigido de acordo com o tipo de investimento. Tipo 1 -- Poupanpa -- 3% ; Tipo 2 -- Fundos de Renda fixa -- 4%.

#include <stdio.h>

void main (void) {
	
	int Tipo;
	float Investimento, InvestimentoFinal;
	
	printf ("Por favor, insira abaixo a quantidade investida: \n");
	scanf ("%f", &Investimento);
	
	printf ("\nDigite 1 para Poupanca ou Digite 2 para Fundos de Renda Fixa: \n");
	scanf ("%i", &Tipo);
	
	if (Tipo == 1) {
		InvestimentoFinal = Investimento * 1.03;
		printf ("\nO valor do seu investimento foi de:\n%.2f Reais\n", InvestimentoFinal);
		
	}else {
		
		if (Tipo == 2) {
		InvestimentoFinal = Investimento * 1.04;
		printf ("\nO valor do seu investimento foi de:\n%.2f Reais\n", InvestimentoFinal);
		
		}else {
			printf ("\nTipo de investimento invalido. Insira 1 para Poupanca ou 2 para Fundos de Renda Fixa. \n\n");
		}
	}
}