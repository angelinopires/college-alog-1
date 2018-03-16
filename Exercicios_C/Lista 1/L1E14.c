// 14 - ) Joao recebeu seu salario e precisa pagar duas contas que estao atrasadas. Como as contas estao atrasadas, Joao tera que pagar multa de 2% sobre cada conta. Construa um algoritmo que calcule e mostre quanto restara no salario do Joao.

#include <stdio.h>

void main (void) {
	float Sal, Restou, Conta1, Conta2;
	
	printf ("Por favor, informe seu salario Joao: \n");
	scanf ("%f", &Sal);
	
	printf ("\nAgora o valor da primeira conta: \n");
	scanf ("%f", &Conta1);
	
	printf ("\nE por ultimo o valor da segunda conta: \n");
	scanf ("%f", &Conta2);
	
	Restou = Sal - (Conta1 * 1.02) - (Conta2 * 1,02);
	
	printf ("\nRestante do salario de Joao:\n%.2f Reais", Restou);
}