// 2-) A partir do enunciado do exercico 1, faca a construcao do algoritmo utilizando a estrutura de repeticao "enquanto-faca". O prcesso de repeticao deve ser finalizado quando for informado 0 para o RA.

#include <stdio.h>

void main (void){
	int RA, QtdeAprov, QtdeReprov;
	float NP1, NP2, Media, MediaTurma;

	// Zerar as variaveis que entram nos ifs. Porque fica com "lixo" acumulado
	QtdeAprov = 0;
	QtdeReprov = 0;
	MediaTurma = 0;
	
	printf ("Insira o RA abaixo: \n");
	scanf ("%i", &RA);
	
	while (RA > 0) {
		printf ("\nPor favor, insira a nota da primeira prova: \n");
		scanf ("%f", &NP1);

		printf ("\nE por ultimo a nota da segunda prova: \n");
		scanf ("%f", &NP2);
		
		Media = (NP1 + NP2) / 2;
		printf ("\nSua media foi de:\n%.2f\n", Media);

		if (Media >= 6) {
			QtdeAprov = QtdeAprov + 1;
			printf ("\nParabens! Voce foi aprovado!\n\n");

		}else {
			QtdeReprov = QtdeReprov + 1;
			printf ("\nQue pena! Infelizmente voce foi reprovado.\n\n");
		}
		
		MediaTurma = MediaTurma + Media;
		
		printf ("\nInsira o RA abaixo: \n");
		scanf ("%i", &RA);
	}
	
	if ((QtdeAprov + QtdeAprov) > 0) {
		MediaTurma = MediaTurma / (QtdeAprov + QtdeReprov);
	}
	printf ("\nHouveram %i alunos aprovados, %i alunos reprovados e a media da turma foi de: %.2f\n\n", QtdeAprov, QtdeReprov, MediaTurma);
}