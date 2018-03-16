// 9 - ) Faca um algoritmo que receba o peso de uma pessoa e em seguida calcule e mostre: 
// O novo peso, se a pessoa engodar 15% sobre o peso informado;
// O novo peso, se a pessoa emagrecer 20% sobre o peso informado.

#include <stdio.h>

void main (void){
	
	float Peso, Engordou, Emagreceu;
	
	printf ("Por favor, informe o peso abaixo: \n");
	scanf ("%f", &Peso);
	
	Engordou = Peso * 1.15;
	Emagreceu = Peso * 0.8;
	
	printf ("\nParabens, voce emagreceu! Seu novo peso: \n %.2f", Emagreceu);
	printf ("\n\nInfelizmente voce engordou, seu novo peso: \n %.2f", Engordou);
}