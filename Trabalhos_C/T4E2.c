#include <stdio.h>

void main (void) {
	int Num, Resto = 0, Saida = 0, Base = 1; 
	
	printf("Por favor, insira um numero inteiro abaixo: \n");
    scanf("%i", &Num);
	
	while(Num != 0) {
		
		// Acha o resto, o binario do numero
        Resto = Num % 2;
		
		// Div de 2 para fazer o processo ate ser igual a 0
        Num /= 2;
		
		// Numero que sera exibido na saida
        Saida += (Resto * Base);
		
		// Aumenta em 10 a cada processo para exibir o numero corretamente
        Base *= 10;		
    }
	printf("O numero inserido equivale a:\n%i em binario\n\n", Saida);
}