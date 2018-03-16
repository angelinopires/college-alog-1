// 1 - ) Um banco concedera um credito especial aos seus clientes de acordo com o saldo medio no ultimo ano. Construa um algoritmo que receba o saldo medio de um cliente e calcule o valor do credito, de acordo com a tebela a seguir. Mostre o saldo medio e o valor do credito:

// Abaixo de R$ 2000 --> 10% do saldo medio;
// Entre R$ 2000 (Inclui-se 2000) -> R$ 3000; --> 20% do saldo medio;
// Entre R$ 3000 (Inclui-se 3000) -> R$ 4000; --> 25% do saldo medio;

#include <stdio.h>

int main () {
	float SaldoMed, ValCredit;

	printf ("Por favor, digite seu saldo medio do ultimo ano abaixo: \n");
	scanf ("%f", &SaldoMed);

	if (SaldoMed >= 4000 || SaldoMed <= 0) {
		printf ("\nValor invalido, por favor tente novamente. *Cota permitida de ate RS 3999.\n\n");

	}else {
		if (SaldoMed < 2000) {
				ValCredit = SaldoMed * 0.1;
		}

		if (SaldoMed >= 2000 && SaldoMed < 3000) {
				ValCredit = SaldoMed * 0.2;
		}

		if (SaldoMed >= 3000 && SaldoMed < 4000){
				ValCredit = SaldoMed * 0.25;
		}

		printf ("\nSaldo medio inserido: %.2f; Valor do credito concebido: %.2f.\n\n", SaldoMed, ValCredit);
		}
		
	return 0;
}