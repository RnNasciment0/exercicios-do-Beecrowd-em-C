#include <stdio.h>
#include <math.h>

void main ()
{

	unsigned short casos, qtsCaso = 4, ordem;
	unsigned short linha, coluna, qtsDigitosAtual, k;
	long double maior;

	scanf("%hu", &casos);
	while (casos--)
	{

		scanf("%hu", &ordem);

		long double matriz[ordem][ordem];

		for (linha = 0; linha < ordem; linha++)
			for (coluna = 0; coluna < ordem; coluna++)
			{
				scanf("%Lf", &matriz[linha][coluna]);
				matriz[linha][coluna] *= matriz[linha][coluna];
			}

		printf("Quadrado da matriz #%hu:\n", qtsCaso);
		for (linha = 0; linha < ordem; linha++)
		{	
			
			for (coluna = 0; coluna < ordem; coluna++)
			{
				maior = 0;

				for (k = 0; k < ordem; k++)
					if (matriz[k][coluna] > maior)
						maior = matriz[k][coluna];

				

				qtsDigitosAtual = ((floor(log10(maior))) + 1);
				if (coluna != ordem && coluna != 0)
					printf(" ");

				printf("%*.Lf", qtsDigitosAtual, matriz[linha][coluna]);
			}


			printf("\n");

		}

		qtsCaso++;

		if (casos != 0)
			printf("\n");
	}

}