// 7 -) Uma empresa trabalha com varios produtos divididos em tres categorias (1,2 e 3). Cada produto e representado por um codigo fromado por tres algarismos onde o primeiro algarismo representa a categoria do produto. Construa um algoritmo que tenha como entrada de dados o codigo do produto, o preco unitario, a quantidade vendida e a forma de pagamento (V ou v, a vista; P ou p, a prazo). Em seguida, calcule e exiba o valor da venda de acordo com a tabela de descontos descrita abaixo:

// 1 --> a vista --> Acima de 50 Unidades --> 7,5% de Desconto do Valor da Venda;
// 2 --> a vista --> Acima de 30 Unidades --> 10% de Desconto do Valor da Venda;
// 3 --> a vista --> Acima de 10 Unidades --> 9% de Desconto do Valor da Venda;

#include <stdio.h>

int main () {
    char Pagamento;
	int Codigo, Tipo, QtdeVend;
	float Preco, PrecoVenda, PrecoFinal;

	printf ("Por favor, insira o codigo do produto comprado abaixo: \n");
	scanf ("%i", &Codigo);

	if (Codigo < 0 || Codigo > 399) {
		printf ("\nCodigo invalido, por favor tente novamente.\n\n");

	}else {
		printf ("\nInsira o preco unitario do produto: \n");
		scanf ("%f", &Preco);

		if (Preco <= 0) {
			printf ("\nPreco invalido, por favor tente novamente.\n\n");

		}else {
			printf ("\nInsira a quantidade vendida de produtos: \n");
			scanf ("%i", &QtdeVend);

			//Limpar memoria apos leitura caso for usar scanf para ler char/string
			fflush(stdin);

			if (QtdeVend == 0) {
				printf ("\nQuantidade vendida invalida, por favor tente novamente.\n\n");

			}else {
				printf ("\nInsira a forma de pagamento dos produtos: \n");
				scanf ("%c", &Pagamento);

				Tipo = Codigo / 100;
				PrecoVenda = QtdeVend * Preco;
				PrecoFinal = PrecoVenda;

				if ((Tipo == 1) && (QtdeVend > 50) && (Pagamento == 'V' || Pagamento == 'v')) {
					PrecoFinal = PrecoVenda * 0.925;
				}

				if ((Tipo == 2) && (QtdeVend > 30) && (Pagamento == 'V' || Pagamento == 'v')) {
					PrecoFinal = PrecoVenda * 0.9;
				}

				if ((Tipo == 3) && (QtdeVend > 10) && (Pagamento == 'V' || Pagamento == 'v')) {
					PrecoFinal = PrecoVenda * 0.91;
				}
				printf ("\nO valor total da compra foi:\n%.2f\n\n", PrecoFinal);
			}
		}
	}
}
