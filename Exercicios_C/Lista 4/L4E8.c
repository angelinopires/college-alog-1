#include <stdio.h>

void main (void) {
	int Entrada, Saida, Placa, HEntrada, HSaida, MEntrada, MSaida, Tempo, HFinal, MFinal;
	float ValPagar, Faturamento;
	
	printf("Insira a placa do carro abaixo: \n");
	scanf ("%i", &Placa);
	
	//Zerar valores para nao haver restos nas variaveis dentro dos ifs
	ValPagar = 0;
	Faturamento = 0;
	
	while (Placa > 0) { 
		printf("\nInsira abaixo qual o horario de entrada no estacionamento: \n");
		scanf ("%i", &Entrada);
		
		//Horario de funcionamento das 7h ate as 18h
		if (Entrada <= 700 || Entrada >= 1800) {
			printf ("\nHorario de entrada invalido.\n\n");
			
		}else {
			printf("\nE qual o horario de saida: \n");
			scanf ("%i", &Saida);
			
			if (Saida <= 700 || Saida >= 1800 || Saida <= Entrada) {
				printf ("\nHorario de Saida invalido.\n\n");
			
			}else {
				HEntrada = Entrada / 100;
				HSaida = Saida / 100;
				MEntrada = Entrada % 100;
				MSaida = Saida % 100;
				
				Tempo = ((HSaida * 60) + MSaida) - ((HEntrada * 60) + MEntrada);
				
				HFinal = Tempo / 60;
				
				// Cobramos os 15m apenas se forem completos
				MFinal = (Tempo % 60) / 15;
				ValPagar = HFinal * 6;
				ValPagar = ValPagar + MFinal * 1.5;
			
				printf("\nValor a pagar:\n%.2f\n\n", ValPagar);
				
				// O faturamento vai somando junto com o loop, entregando uma soma completa no fim do while
				Faturamento = Faturamento + ValPagar;
			}
		}	
		printf("\nInsira novamente placa do carro abaixo: \n");
		scanf ("%i", &Placa);
	}
	
	if (Faturamento > 0) {
        printf ("\nO valor do faturamento total foi de: %.2f\n\n", Faturamento);
}