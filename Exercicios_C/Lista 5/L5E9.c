#include <stdio.h>

void main (void) {
	
	int TabProdutos[14][14], LinhaP, ColunaM, Cont;
	int TabTotal, Limpeza;	
	float Media;
	
	TabTotal = 0;
	
	
	for (ColunaM = 0; ColunaM <= 13; ColunaM ++) {	
		for (LinhaP = 0; LinhaP <= 13; LinhaP ++) {
			printf ("\nInsira o valor da celula: \n");
			scanf ("%i", &TabProdutos[LinhaP][ColunaM]);
		}
	}
		
	for (LinhaP = 0; LinhaP <= 13; LinhaP ++) {
		for (ColunaM = 0; ColunaM <= 13; ColunaM++) {
			if(LinhaP < 4 && ColunaM < 4){
				TabTotal=TabTotal+TabProdutos[LinhaP][ColunaM];
			}
			if(LinhaP > 10  && ColunaM < 4){
				TabTotal=TabTotal+TabProdutos[LinhaP][ColunaM];
			}
			if(LinhaP > 10 && ColunaM < 10){
				TabTotal=TabTotal+TabProdutos[LinhaP][ColunaM];
			}
			if(LinhaP < 4 && ColunaM > 10){
				TabTotal=TabTotal+TabProdutos[LinhaP][ColunaM];
			}
		}
		
	}
	printf ("\nA somatória dos quatro lados é de:\n%i\n\n", TabTotal);
}