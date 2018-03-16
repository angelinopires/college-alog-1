// 4 -) Construa um algoritmo que receba o salario de um funcionario e, usando a tabela a seguir, calcule e mostre o valor a receber. Sabe-se que este e composto pelo salario do funcionario acrescido de gratificacao e descontado o imposto de 7% sobre o salario sem gratificacao.

// Ate R$ 450 (Inclui 450) --> Gratificacao de R$ 100;
// Entre R$ 450 e R$ 700 (Inclui 700) --> Gratificacao de R$ 75;
// Entre R$ 700 e R$ 1000 (Inclui 1000) --> Gratificacao de R$ 50;
// Acima de R$ 1000 --> Gratificacao de R$ 35;

#include <stdio.h>

void main (void) {
	float Sal, SalFinal;
	
	printf ("Por favor, insira o valor do seu salario abaixo: \n");
	scanf ("%f", &Sal);
	
	if (Sal <= 0) {
		printf ("\nValor invalido, tente novamente.\n\n");
		
	}else {
		if (Sal <= 450) {
			SalFinal = Sal - (Sal * 0.07) + 100;
		}
		
		if (Sal > 450 && Sal <= 700) {
			SalFinal = Sal - (Sal * 0.07) + 75;
		}
		
		if (Sal > 700 && Sal <= 1000) {
			SalFinal = Sal - (Sal * 0.07) + 50;
		}
		
		if (Sal > 1000) {
			SalFinal = Sal - (Sal * 0.07) + 35;
		}
		
		printf ("\nValor a receber:\n%.2\n\n", SalFinal);
	}
}