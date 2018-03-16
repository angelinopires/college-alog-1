// 6 - ) Um funcionario recebe um salario fixo e mais 4% de comissao sobre as vendas. Construa um algoritmo que receba o salario fixo de um funcionario e o valor de suas vendas, calcule e mostre a comissao e o salario final.

#include <stdio.h>

void main (void)
{
	float Sal, ValVendas, Comiss, SalF;
	
	printf ("Por favor, digite seu salario fixo abaixo: \n");
	scanf ("%f", &Sal);
	
	printf ("\nAgora o valor das vendas efetuadas: \n");
	scanf ("%f", &ValVendas);
	
	Comiss = ValVendas * 0.04;
	SalF = Sal + Comiss;
	
	printf ("\nO valor da sua comissao foi: " "%.2f", Comiss);
	printf ("\nSalario final: " "%.2f", SalF);
}