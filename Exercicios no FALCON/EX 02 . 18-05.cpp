#include <stdio.h>
#include <stdlib.h>

int main()
{
	int I, OP, COD, CODMA = 0;
	char CLI[15];

	for(I = 1; I <= 6; I++)
	{
		system("cls");
		printf("1 - Digitar Codigo \n");
		printf("2 - Gerar Automaticamente \n");
		printf("De uma opcao: ");
		scanf("%d", &OP);
		fflush(stdin);
		if(OP == 1)
		{
			printf("De o Codigo: ");
			scanf("%d", &COD);
			fflush(stdin);
		}
		else
			COD = CODMA + 1;
			printf("Entre com o Cliente: ");
			gets(CLI);
		if(COD > CODMA)
			CODMA = COD;
			printf("Codigo: %d\n", COD);
			printf("Cliente: %s\n", CLI);
			system("pause");
		}
	}

