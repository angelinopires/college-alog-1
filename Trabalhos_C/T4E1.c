#include <stdio.h>

void main (void) {
	
	int Cont, Semana, Mes, MenorMes, MaiorMes;
	float Leitura, TotalLeitura, MenorLt, MaiorLt, MediaLt;
	
		Semana = 0;
		Mes = 0;
		MenorMes = 0;
		MaiorMes = 0;
		MaiorLt = 0;
		MenorLt = 0;
		TotalLeitura = 0;
		
		for (Cont = 0; Cont <= 47; Cont++) {
			
			// Sempre que o mod de semana for = 0, contador soma 1 no mes e na semana, caso nao for apenas na semana
			if ((Semana % 4) == 0) {
				Mes++;
			    Semana++;
				
			}else {
				Semana++;
			}
			
			printf("\nInsira a leitura do Mes: %i | Semana: %i\n", Mes, Semana);
	        scanf("%f", &Leitura);
			
			// Somando o total de leitura pluvial feita, para fazer a media no final
			TotalLeitura += Leitura;
			
			// Primeiro faco um if para jogar o valor de leitura no MenorL sempre que o programa startar
			if (MenorLt == 0) {
				MenorLt = Leitura;
				MenorMes = Mes;
			
			// Depois e so encontrar o menor valor normalmente
			}else if (Leitura < MenorLt) {
				MenorLt = Leitura;
				MenorMes = Mes;
			}
			
			// Necessario achar a maior leitura do maior mes
			if (Leitura > MaiorLt) {
	            MaiorLt = Leitura;
	            MaiorMes = Mes;
	        }
		}
	MediaLt = TotalLeitura / Semana;
	printf("\nMedia das Leituras: %.2f \nMaior Leitura obtida: %.2f \nMenor Leitura obtida: %.2f\n", MediaLt, MaiorLt, MenorLt);
	printf("\nMes que ocorreu a Maior Leitura: %i \nMes que ocorreu a Menor Leitura: %i \n", MaiorMes, MenorMes);
}