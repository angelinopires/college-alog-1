#include <stdio.h>

void main (void) {

	int Semana, Mes, ContM, ContS;
	float TabIUV[4][12], TabMedia[12], Media, MaiorM = 0, MenorM = 0;

	// A var "Mes" se refere as colunas dessa matriz
	for (Mes = 0; Mes <= 11; Mes++) {

        // ContM usado para exibir o mes correto no printf; Estou zerando outra matriz (TabMedia) para nao bugar os valores subsequentes
        ContM = Mes + 1;
        TabMedia[Mes] = 0;

		// ContS usado para a mesma funcao descrita acima, mostrar a Semana correta
        for (Semana = 0; Semana <= 3; Semana++)     {
            ContS = Semana + 1;

            printf ("\nInsira a leitura UIV da semana |%i| do Mes |%i|: \n", ContS, ContM);
            scanf ("%f", &TabIUV[Semana][Mes]);

            // Como o "for" da semana vai executado 4 vezes, serao somadas 4 vezes dentro da respectiva coluna (MES), e entao pula para a proxima coluna.
			TabMedia[Mes] = TabIUV[Semana][Mes] + TabMedia[Mes];
        }
	}

	// Contador zerado para exibir o mes correto no printf abaixo
	ContM = 0;

	// "for" usado para calcular a media mensal de cada coluna que somamos la em cima. Como estou usando as colunas como parametro, entao a var MES que vai utilizada
	for (Mes = 0; Mes <= 11; Mes++) {
        ContM = Mes + 1;
        Media = TabMedia[Mes] / 4;

        // Calculos basicos de outros exercicios para achar a maior media e menor, respectivamente
        if (Media > MaiorM) {
            MaiorM = Media;
        }

        if (MenorM == 0) {
            MenorM = Media;

        }else if (Media < MenorM) {
            MenorM = Media;
        }

		// Antes de comecar o proximo "for" exibo a media mensal do mes em questao, ja que e pedido de todos os meses
        printf ("\nA media Mensal do mes |%i| foi de:\n%.2f\n\n",ContM, Media);
    }
    printf ("\nA maior media mensal foi de: %.2f\nA menor media mensal foi de: %.2f\n\n", MaiorM, MenorM);
}
