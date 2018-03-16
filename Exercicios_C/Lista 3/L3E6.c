// 6 -) Construa um algoritmo que leia o horario de entrada (HHMM) e o horario de saida (HHMM) de um empregado. Em seguida calcule e exiba quanto tempo (HHMM) o empregado ficou na empresa. Exemplo:

// Entrada: 830 e 1410 -> Saida: 540;

#include <stdio.h>

void main (void) {
	int Entrada, Saida, HoraEnt, MinEnt, HoraSaida, MinSaida, Tempo, HoraFinal, MinFinal, Horario;
	
	printf ("Por favor, insira o horario de entrada apenas em numeros: \n");
	scanf ("%i",&Entrada);
	
	printf ("\nPor favor, insira o horario de saida apenas em numeros: \n");
	scanf ("%i",&Saida);
	
	if (Entrada <= 0 || Saida <= 0) {
		printf ("\nInsira apenas numeros maiores que 0.\n\n");
		
	}else {
		HoraEnt = (Entrada / 100) * 60; // Div 100 pra deixar no mesmo patamar que os minutos, e depois transformo em minutos
		MinEnt = Entrada % 100; // Fazendo mod 100 consigo pegar apenas os minutos da entrada inserida
		HoraSaida = (Saida / 100) * 60;
		MinSaida = Saida % 100;
		
		Tempo = (HoraSaida + MinSaida) - (HoraEnt + MinEnt); // Faço a subtracao pra saber o tempo que o empregado ficou na empresa
		HoraFinal = (Tempo / 60) * 100; // E acho as horas e transformo no formato HHMM
		MinFinal = Tempo % 60; // mod de 60 para achar os minutos
		
		Horario = HoraFinal + MinFinal;
		printf ("\nVoce ficou:\n%i trabalhando na empresa\n\n", Horario);
	}
}