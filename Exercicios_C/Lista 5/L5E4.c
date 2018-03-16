// 4-) A relacao representa as notas finais de 30 alunos. (Apenas uma representacao basica de matri unidimensional).
// Monte um algoritmo que faca a definicao e a implementacao de uma estrutura de dados matriz com o proposito de armazenar as medias dos respectivos alunos e em seguida calcule e exiba:
// A media da Turma; Quantidade de alunos com nota abaixo da media da turma; Quantidade de alunos com nota acima da media da turma;
// Quantidade de alunos aprovados (Considere para aprovacao nota igual ou superior a 5.0);
// Quantidade de alunos reprovados (Considere para reprovacao nota inferior a 3.0);
// Quantidade de alunos para exame (Considere para exame nota acima de 3.0 e abaixo de 5.0);

#include <stdio.h>

void main (void) {
	
	int Nota, ContAluno = 0, Aprovado = 0, Reprovado = 0, Exame = 0, AcimaMedia = 0, AbaixoMedia = 0;
	float TabMedia[30], Media = 0; 
	
	// "for" simples para ler os valores, somar a media e somar tambem os alunos aprovados, reprovados e em exame
	for (Nota = 0; Nota <= 29; Nota++) {
		ContAluno++;
		
		printf ("\nInsira a nota do Aluno %i abaixo:\n", ContAluno);
		scanf ("%f", &TabMedia[Nota]);
		
		if (TabMedia[Nota] >= 5)
			Aprovado++;
		
		if (TabMedia[Nota] > 3 && TabMedia[Nota] < 5)
			Exame++;
		
		if (TabMedia[Nota] <= 3)
			Reprovado++;
			
		Media += TabMedia[Nota];
	}
	
	Media /= 30;
	
	// Outro "for" para vereficar um a um qual ficou acima da media (Apos realizar todos os calculos)
	for (Nota = 0; Nota <= 29; Nota++) {
		ContAluno++;
		
		if (TabMedia[Nota] >= Media)
			AcimaMedia++;
		
		if (TabMedia[Nota] < Media)
			AbaixoMedia++;
	}
	printf ("\nA media da turma foi: %.2f | %i ficaram acima da Media | %i ficaram abaixo da Media\n", Media, AcimaMedia, AbaixoMedia);
	printf ("\nQuantidade de alunos aprovados: %i | Quantidade de alunos reprovados: %i | Quantidade de alunos em exame: %i\n\n", Aprovado, Reprovado, Exame);
}	