// 4 - ) Construa uma aplicacao que verifique a validade de uma senha fornecida pelo usuario. A senha e 4531. O programa deve mostrar uma mensagem de permissao de acesso ou nao.

#include <stdio.h>

void main (void) {
	int Senha;
	
	printf ("Por favor, informe sua senha abaixo: \n");
	scanf ("%i", &Senha);
	
	if (Senha == 4531) {
		printf ("\nAcesso permitido\n\n");
		
	}else {
		printf ("\nSenha incorreta. Tente novamente.\n\n");	
	}
}