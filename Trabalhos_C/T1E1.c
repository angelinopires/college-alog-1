#include <stdio.h>

void main (void) {
	float Altura, Raio, AreaB, AreaL, AreaCilin, QtdeLatas, Custo; 
	
	printf ("Por favor, informe a altura em metros: \n");
	scanf ("%f", &Altura);
	
	printf ("\nE tambem o tamanho do raio em metros: \n");
	scanf ("%f", &Raio);
	
	AreaB = (Raio * Raio) * 3.14;
	AreaL = 2 * 3.14 * Raio * Altura;
	AreaCilin = 2 * AreaB + AreaL;
	
	QtdeLatas =  (AreaCilin / 3) / 18; //Calculo de Latas. 1 litro a cada 3 metros, 18 Litros por lata 
	Custo = QtdeLatas * 86,5;
	
	printf ("\nQuantidade aproxiamda de latas de tintas utilizadas:\n%.2f", QtdeLatas);
	printf ("\nCusto para pintar o tanque de combustivel:\n%.2f", Custo);
}