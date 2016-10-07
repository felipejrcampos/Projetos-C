#include <stdio.h>
#include <stdlib.h>

int main()
{
	int COD,PECAS,FUNCIO = 0,TPECAS
	float SALMIN,SAL,FOL;

		printf("Qual o salario Minimo: R$ ");
		scanf("%f",&SALMIN);
	while(COD != 0)
	{
		system("cls");
		printf("\nNumero do Operario: ");
		scanf("%f",COD);
			if(COD==0)
				break;
				printf("Nemero de peças fabricadas: ")
				scanf("%f",&PECAS);
				if(PECAS<=20)
					SAL = SALMIN;
				else if(PECAS >= 21 && PECAS <= 31)
					SAL = SALMIN + (SALMIN * 0.05);
				else
					SAL = SALMIN  +(SALMIN * 0.10);
	}
	printf("")
				
		
		
}