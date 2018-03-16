#include <stdio.h>

void main (void) {
	int Codigo, Setor, Empregado;
	float HorasTrab, Sal;
	
	printf ("Por favor, insira o codigo do funcionario abaixo: \n");
	scanf ("%i", &Codigo);
	
	// Apenas numeros de quatro digitos permitidos
	if (Codigo < 1001 || Codigo > 3999 || Codigo == 2000 || Codigo == 3000) {
		printf ("\nCodigo invalido, tente novamente.\n\n");
		
	}else {
		
		// Acha o primeiro digito do numero, que e o Setor
		Setor = Codigo / 1000;
		
		printf ("Insira a quantidade de horas trabalhadas abaixo: \n");
		scanf ("%f", &HorasTrab);
		
		if (HorasTrab > 400) {
			
			// Somo o excedente aqui, multiplicando pela hora + 10% da mesma
			if (Setor == 1) {
				Sal = 400 * 7.8 + (HorasTrab - 400) * (7.8 + 0.78);
			}
			
			if (Setor == 2) {
				Sal = 400 * 11.5 + (HorasTrab - 400) * (11.5 + 1.15);
			}
			
			if (Setor == 3) {
				Sal = 400 * 18.25 + (HorasTrab - 400) * (18.25 + 1.825);
			}
			printf ("\nO salario do funcionario:\n%.2f\n\n", Sal);
			
		}else {
			if (Setor == 1) {
				Sal = HorasTrab * 7.8;
			}
			
			if (Setor == 2) {
				Sal = HorasTrab * 11.5;
			}
			
			if (Setor == 3) {
				Sal = HorasTrab * 18.25;
			}
			printf ("\nO salario do funcionario:\n%.2f\n\n", Sal);
		}
		
	}
}