#include <stdio.h>
#include <stdlib.h>

int main()
{
  int I;
  float SALDO,VALOR;
  SALDO = 0;
  VALOR = 0;
  
  while(1)
  {
    system("cls");
	printf("1 - DEPOSITAR \n");
    printf("2 - RETIRAR \n");
    printf("3 - Verificar Saldo \n");
    printf("0 - FIM \n");
    printf("De uma opcao: ");
    scanf("%d",&I);
    if(I == 0)
	{
	  printf("Tchau \n");
	  break;	
	}
	else if(I == 1)
    {
	  printf("Quanto voce deseja depositar? \n");
	  scanf("%f",&VALOR);
	  SALDO += VALOR;
	}	
	else if(I == 2)
	{
      printf("Quanto voce deseja sacar? \n");
      scanf("%f",&VALOR);
      SALDO -= VALOR;
      if(SALDO < 0)
	  {
		printf("saldo Insuficiente, voce nao pode sacar. \n");
		SALDO = SALDO + VALOR;
	  }
      else
	  {
		printf("Retire seu dinheiro\n");
	  }
	}
	else if(I == 3)
	{
	  printf("Seu saldo eh R$ %0.2f .\n",SALDO);
	}
    else
	{
  	  printf("Desculpe essa opcao nao existe \n");
	}
    system("pause");
  }	
}