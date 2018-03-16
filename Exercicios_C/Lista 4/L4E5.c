// 5-) Uma empresa de ônibus de viagem pretende realizar um controle automatizadoda emissão de passagens. Para tal, a entrada dos dados será feita através do número de identificação da passagem, do valor da passagem e do tipo da passagem (C para comum, E para estudante e I para idoso).

// Se o tipo da passagem for estudante será dado um desconto de 25% sobre o valor da passagem;
// Se o tipo da passagem for idoso será dado um desconto 35% sobre o valor da passagem;

// Construa um algoritmo que a partir dos dados de entrada definidos acima calcule e exiba o valor a ser pago pela passagem. A venda de passagens deve ser finalizada quando for informado 0 (zero) para o número de identificação da passagem. Ao final das vendas faça a exibição do valor total obtido pelas vendas das passagens.

#include <stdio.h>

void main (void) {
	int NumPass;
	float ValPass, ValPagar, TotVendas;
	char Tipo;
	
	TotVendas = 0;
	
	printf ("Informe o numero da passagem abaixo: \n");
	scanf ("%i", &NumPass);
	
	while (NumPass > 0) {
		printf ("\nInforme o valor da passagem: \n");
		scanf ("%f", &ValPass);
		
		fflush(stdin);
		printf ("\nInforme o Tipo da passagem por favor: \n");
		scanf ("%c", &Tipo);
		
		if (Tipo == 'E' || Tipo == 'e') {
			ValPagar = ValPass * 0.75;
			
		}else if (Tipo == 'I' || Tipo == 'i') {
			ValPagar = ValPass * 0.65;	
			
		}else {
			ValPagar = ValPass;
		}
		
		TotVendas = TotVendas + ValPagar;
		printf ("\nValor a pagar pela passagem:\n%.2f\n\n", ValPagar);
		
		printf ("\nInforme o numero da passagem abaixo: \n");
		scanf ("%i", &NumPass);
	}
	
	printf ("\nTotal de vendas:\n%.2f\n\n", TotVendas);
}