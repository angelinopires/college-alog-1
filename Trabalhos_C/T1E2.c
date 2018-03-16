#include <stdio.h>

void main (void) {
	int Saque, Uni, Cont20, Cont50, RestoSaque, TotalNotas; 
	
	printf ("Por favor, informe a quantidade que deseja sacar: \n");
	scanf ("%i", &Saque);
	
	if (Saque > 1000) {
		printf ("\nValor maximo de saque permitido 1000\n\n");
	}
	
	else {
		Uni = Saque % 10; // Se a unidade tiver valores como 1, 2... Não será permitido o saque
		
		if ((Uni > 0) || (Saque == 10) || (Saque == 30) || (Saque == 0)) { // Se o saque não for divisivel por 20 ou 50, não sera permitido o saque. == Significa igualdade
			printf ("\nO valor do saque deve ser feito em notas de 20 ou 50\n\n");	
		}
		
		else {
			Cont50 = Saque / 50; // Contador de notas de 50
			RestoSaque = Saque - (Cont50 * 50); // Caso sobrar, faremos uma contagem de notas de 20
			Cont20 = RestoSaque / 20; // Contador de notas de 20
			TotalNotas = Cont50 * 50 + Cont20 * 20; // Contador total de notas
			
			if (TotalNotas == Saque) { // Caso seja um numero simples para dividir ao maximo por 50 e 20, finalizamos
				printf ("\nVoce sacou:\nCedulas de 50: %i; Cedulas de 20: %i\n\n", Cont50, Cont20);
			}
			
			else {
				RestoSaque = RestoSaque + 50; // Somando de volta uma nota de 50 podemos fazer um RestoSaque mod 20 = 0
				Cont50 = Cont50 - 1; // Estou tirando uma nota do contador, afinal somei ela de volta
				Cont20 = RestoSaque / 20; // Finalmente faco a contagem final.
				
				printf ("\nVoce sacou:\n\n%i Notas de 50 e %i Notas de 20\n\n", Cont50, Cont20);
			}
		}	
	}
	
}