// 1 - ) Construa um algoritmo para calcular  e mostrar o salario reajustado de um funcionario. Sabe-se que o percentual de aumento e o mesmo da tabela a seguir: Ate R$ 300 -> Aumento de 35%; Acima de R$ 300 -> Aumento de 15%.

#include <stdio.h>

void main (void) {
	float Sal, SalReajuste;
	
	printf ("Por favor, insira seu salario abaixo: \n");
	scanf ("%f", &Sal);
	
	if (Sal <= 300) {
		SalReajuste = Sal * 1.35;
		
	}else {
		SalReajuste = Sal * 1.15;
	}
	
	printf ("\nValor do seu salario reajustado:\n%.2f Reais.\n", SalReajuste);
}