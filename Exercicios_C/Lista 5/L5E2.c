// 2-) Faca um algoritmo que crie uma matriz inteira com 10 elementos. Carregue esta matriz utilizando o comando leia. Em seguida pesquise e exiba o maior e o menor elemento da Matriz.

#include <stdio.h>

void main (void) {
	int MatrizTop[10], NumeroTop, MaiorTop = 0, MenorTop = 0;

	// Em matrizes reais e inteiras usamos a var que e lida dentro dela como parametro no "for"
	for (NumeroTop = 0; NumeroTop <= 9; NumeroTop++) {
		printf ("\nInsira um valor inteiro maior que zero:\n");
		scanf ("%i", &MatrizTop[NumeroTop]);

		// Podemos usar o valor que acabou de ser inserido para fazer essas verificacoes, utilizando o proprio nome da matriz.
		if (MatrizTop[NumeroTop] > MaiorTop) {
			MaiorTop = MatrizTop[NumeroTop];

		}else if (MenorTop == 0) {
			MenorTop = MatrizTop[NumeroTop];

		}else if (MatrizTop[NumeroTop] < MenorTop) {
			MenorTop = MatrizTop[NumeroTop];
		}
	}
	printf ("\nO maior elemento da matriz foi o |%i|; E o menor foi |%i|\n\n", MaiorTop, MenorTop);
}
