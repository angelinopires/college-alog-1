#include <stdio.h>

void main (void) {
	 
	 // Matriz de entrada dos dados
	int TabProdutos[4][12], LinhaP, ColunaM, Cont;
	
	// Matriz de Limpeza para TabTotal, zerando toda vez
	int TabTotal[4], Limpeza;	
	float Media;
	
	// For para limpeza do TabTotal
	for (Limpeza = 0; Limpeza <= 3; Limpeza++) {
		TabTotal[Limpeza] = 0;
	}
	
	// For de inserir dados na matriz
	for (ColunaM = 0; ColunaM <= 11; ColunaM++) {	
	    for (LinhaP = 0; LinhaP <= 3; LinhaP++) {
			
			// Cont para exibir o produto correto no print
			Cont = LinhaP + 1;
			printf ("\nInsira a quantidade produtos %i vendida: \n", Cont);
			scanf ("%i", &TabProdutos[LinhaP][ColunaM]);
		}
	}
		
	// For para contagem total e media da matriz
	for (LinhaP = 0; LinhaP <= 3; LinhaP ++) {
		for (ColunaM = 0; ColunaM <= 11; ColunaM++) {
			TabTotal[LinhaP] = TabProdutos[LinhaP][ColunaM] + TabTotal[LinhaP];
		}
		
		// Cont para exibir o numero correto do produto no print
		Cont = LinhaP +1;
		
		printf ("\nO total do produto %i foi: %i\n", Cont, TabTotal[LinhaP]);
		Media = TabTotal[LinhaP] / 12;
		printf ("\nA media do produto %i foi de:\n%.2f\n\n", Cont, Media);
	}
}