#include <stdio.h>

// Funcao CalcDifHor;
// Recebe 2 parametros de fora, Entrada e Saida
// Retorna o calculo Tempo (Saida - Entrada)
int CalcDifHor (int Entrada, int Saida) {
	int HHEnt, MMEnt, HHSai, MMSai, Tempo = 0;

	if (Entrada <= 0) {
		printf ("\nInsira apenas valores corretos, e que seja diferente de 0.\n");

	}else if (Saida <= Entrada || Saida == 0) {
		printf ("\nInsira apenas valores corretos; Acima da entrada ou que sejam diferentes de 0.\n");

		}else {
            HHEnt = (Entrada / 100) * 60;
            MMEnt = Entrada % 100;
            HHSai = (Saida / 100) * 60;
            MMSai = Saida % 100;

            Tempo = (HHSai + MMSai) - (HHEnt + MMEnt);
        }
    return (Tempo);
}

//Rotina principal
int main (void) {
	int Placa, Entrada, Saida;
	float ValPagar, TotFaturado = 0;

	//Estruturas "do while" e preciso ler o dado chave antes de comecar, e ao final do "Do"
	printf ("\nInsira a placa do carro estacionado: \n");
    scanf ("%i", &Placa);

	do {

        if (Placa <= 0) {
            printf ("\nPlaca de carro invalida, tente novamente.\n\n");

        }else {
            printf ("\nInsira o horario de entrada do estacionamento: \n");
            scanf ("%i", &Entrada);

            printf ("\nInsira o horario de saida do estacionamento: \n");
            scanf ("%i", &Saida);

            ValPagar = ((CalcDifHor(Entrada,Saida)) / 15) * 1.5;
            TotFaturado += ValPagar;

            printf ("\nInsira a placa do carro estacionado: \n");
            scanf ("%i", &Placa);
        }

	}while (Placa > 0);
	
	// Printf fora do "do while" para exibir apenas uma vez ao fim do programa
	if (TotFaturado > 0)
		printf ("\nO total faturado pelo estacionamento foi:\n%.2f Reais\n\n", TotFaturado);

    return 0;
}

