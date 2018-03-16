// 17 - ) Construa um algoritmo que receba o numero de horas trabalhadas, o valor do salario minimo e o numero de horas extras trabalhadas. Calcule e mostre o salario a receber seguindo as regras: 

// A hora trabalhada vale 1/8 do salario minimo;
// a hora extra vale 1/4 do salario minimo;
// O salario bruto equivale ao numero de horas trabalhadas multiplicado pelo valor da hora trabalhada;
// A quantia a receber pelas horas extras equivale ao numero de horas extras trabalha multiplicado pelo valor da hora extra;
// o salario a receber equivale ao salario bruto mais a quantia a receber pelas horas extras.

#include <stdio.h>

void main (void) {
	float HorasTrab, SalMin, HorasExt, ValHTrab, ValHExt, SalBr, SalHExt, SalF;
	
	printf ("Por favor, insira abaixo suas horas trabalhadas: \n");
	scanf ("%f", &HorasTrab);
	
	printf ("\nPor favor, insira tambem o valor do salario minimo: \n");
	scanf ("%f", &SalMin);
	
	printf ("\nE por ultimo, insira a quantidade de horas extras: \n");
	scanf ("%f", &HorasExt);
	
	ValHTrab = SalMin / 8;
	ValHExt = SalMin / 4;
	SalBr = HorasTrab * ValHTrab; // Valor a receber das horas normais
	SalHExt = HorasExt * ValHExt; // Valor a receber das horas extras
	
	SalF = SalBr + SalHExt;
	
	printf ("\nValor do total de seu salario:\n%.2f Reais\n", SalF);
}
