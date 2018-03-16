// 13 - Construa um algoritmo que receba o valor do salario minimo e o valor do salario d eum funcionario, calcule e mostre a quantidade de salarios minimos que ganha esse funcionario.

#include <stdio.h>

void main (void) {
	
	float Sal, SalMin, Relacao;
	
	printf ("Por favor, escreva o valor do seu salario abaixo: \n");
	scanf ("%f", &Sal);
	
	printf ("\nAgora, o valor atualizado do Salario Minimo: \n");
	scanf ("%f", &SalMin);
	
	Relacao = Sal / SalMin;
	
	printf ("\nVoce recebe:\n%.2f Salarios Minimos \n", Relacao);
}