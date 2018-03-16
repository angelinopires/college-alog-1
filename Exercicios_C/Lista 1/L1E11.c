// 11 - ) Construa um algoritmo que a partir de uma quantidade de segundos faca a sua conversao para um numero inteiro no formato HHMMSS, e em seguida faca a exebiao deste numero.

#include <stdio.h>

void main (void) {
	
	int TempoSeg, Hora, Minuto, Segundos, Tempo;
	
	printf ("Por favor, escreva a quantidade de tempo em segundos abaixo: \n");
	scanf ("%i", &TempoSeg);
	
	Hora = TempoSeg / 3600; // Quociente da divisao acha as horas, nesse caso
	Minuto = (TempoSeg % 3600) / 60; // Primeiro achar o resto da divsao por 3600, e depois achar os minutos
	Segundos = (TempoSeg % 3600) % 60; // Mesmo processo acima, so que encontrando os segundos usando o mod
	
	Tempo = Hora * 10000 + Minuto * 100 + Segundos;
	
	printf ("\nSeu tempo em Horas, minutos e segundos: \n%i", Tempo);	
}