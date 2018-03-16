// 1-) Construa um algoritmo que faca a entrada de dados do RA, da nota da Primeira e Segunda prova de um conjunto de 30 alunos. Para cada aluno exiba a sua media aritmetica entre as provas e a situacao ("Aprovado" ou "Reprovado"), para tal considere a aprovacao media do aluno igual ou superiro a 6,0.

#include <stdio.h>

void main (void){
	int RA, Contador, QtdeAprov, QtdeReprov;
	float NP1, NP2, Media, MediaTurma;

	QtdeAprov = 0;
	QtdeReprov = 0;
	MediaTurma = 0;

	for (Contador = 1; Contador <= 30; Contador = Contador + 1) {
		printf ("Insira o RA abaixo: \n");
		scanf ("%i", &RA);

		printf ("\nPor favor, insira a nota da primeira prova: \n");
		scanf ("%f", &NP1);

		printf ("\nE por ultimo a nota da segunda prova: \n");
		scanf ("%f", &NP2);

		Media = (NP1 + NP2) / 2;
		printf ("\nSua media foi de:\n%.2f", Media);

		if (Media >= 6) {
			QtdeAprov = QtdeAprov + 1;
			printf ("\nParabens! Voce foi aprovado!\n\n");

		}else {
			QtdeReprov = QtdeReprov + 1;
			printf ("\nQue pena! Infelizmente voce foi reprovado.\n\n");
		}
		MediaTurma = MediaTurma + Media;
	}

	MediaTurma = MediaTurma / 30;
	printf ("\nHouveram %i alunos aprovados, %i alunos reprovados e a media da turma foi de: %.2f\n\n", QtdeAprov, QtdeReprov, MediaTurma);
}
