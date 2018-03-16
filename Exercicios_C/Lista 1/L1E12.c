// 12 - ) Uma loja vende bicicletas com um acrescimo de 50% sobre o preco de custo. Ele paga a cada vendedor dois salarios minimos por mes mais uma comissao de 15% sobre o preco de custo de cada bicicleta vendida, divido igualmente entre eles. Construa um algortimo que a partir do numero de empregados da loja, do valor do salario minimo, do preco de custo da bicileta e do numero de bicicletas vendidas, calcule e exiba: O valor recebido por cada empregado; Luco liquido da loja ( Faturamente bruto - Despasas);

#include <stdio.h>

void main (void) {
	
	int QtdeEmp, QtdeVend;
	float SalMin, Custo, Comiss, PrecV, SalF, LucroBr, LucroLiq;
	
	printf ("Por favor, informe a quantidade de empregados abaixo: \n");
	scanf ("%i", &QtdeEmp);
	
	printf ("\nPor favor, insira o valor do Salario Minimo atualmente: \n");
	scanf ("%f", &SalMin);
	
	printf ("\nAgora insira o valor do custo de cada bicicleta vendida: \n");
	scanf ("%f", &Custo);
	
	printf ("\nE por ultimo, insira a quantidade de bicicletas vendidas: \n");
	scanf ("%i", &QtdeVend);
	
	PrecV = Custo * 1,5;
	Comiss = (QtdeVend * Custo * 0,15) / QtdeEmp; // Valor da comissao por empregado
	SalF = 2 * SalMin + Comiss;
	
	LucroBr = QtdeVend * PrecV; // Duvida aqui
	LucroLiq = LucroBr - (SalF * QtdeEmp);
	
	printf ("\nValor recebido por cada empregado:\n%.2f", SalF);
	printf ("\n\nO Lucro Liquido da loja foi de:\n%.2f", LucroLiq);	
}