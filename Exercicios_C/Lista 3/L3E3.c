// 3 - ) Construa um algoritmo que receba o salario de um funcionario e, usando a tabela a seguir, calcule e mostre o valor do aumento e novo salario.

// Ate R$ 3000 (Inclui 3000) --> Aumento de 15%;
// Entre R$ 3000 e R$ 6000 (Inclui 6000) --> Aumento de 10%;
// Entre R$ 6000 e R$ 9000 (Inclui 9000) --> Aumento de 5%;
// Acima de R$ 9000 --> Sem aumento.

#include <stdio.h>

void main (void) {
	float Sal, Aumento, SalFinal;
	
	Aumento = 0;
	
	printf ("Por favor, insira o valor do seu salario abaixo: \n");
	scanf ("%f", &Sal);
	
	if (Sal <= 0) {
		printf ("\nValor invalido, tente novamente.\n\n");
		
	}else {
		if (Sal <= 3000) {
			Aumento = Sal * 0.15;
		}
		
		if (Sal > 3000 && Sal <= 6000) {
			Aumento = Sal * 0.1;
		}
		
		if (Sal > 6000 && Sal <= 9000) {
			Aumento = Sal * 0.05;
		}
		
		SalFinal = Sal + Aumento;
		printf ("\nVoce recebeu um aumento de: %.2f;\nSeu novo salario: %2.f\n\n", Aumento, SalFinal); 
	}
}