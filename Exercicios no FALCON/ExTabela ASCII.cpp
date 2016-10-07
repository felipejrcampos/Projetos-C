#include <stdio.h>
#include <stdlib.h>
int main()
{
	int N,OP;
	while(1)
	{
	system("cls");
	printf("De o Numero: \n");
	scanf("%d",&N);
	printf("1 - Decimal\n");
	printf("2 - Caractere\n");
	printf("3 - Octal\n");
	printf("4 - Exadecimal\n");
	printf("Em qual sistema voce quer? ");
	scanf("%d",&OP);
	if(OP == 1)
		printf("%i\n",N);
	else if(OP == 2)
		printf("%c\n",N);
	else if(OP == 3)
		printf("%o\n",N);
	else if(OP == 4)
		printf("%x\n",N);
	else
		break;
	system("pause");
	
	}
}