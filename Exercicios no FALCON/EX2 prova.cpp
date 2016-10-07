#include <stdio.h>
#include <string.h>
int main()
{
	int C;
	printf("De o codigo do produto: \n");
	scanf("%d",&C);
	
	if(C == 1)
	{
		printf("O alimento nao eh perecivel.");
	}
	else if(C == 2 || C == 3 || C == 4)
	{
		printf("O alimento eh perecivel.");
	}
	else if(C == 5 || C == 6)
	{
		printf("Vestuario.");
	}
	else if(C == 7)
	{
		printf("Higiene pessoal.");
	}
	else if(C >=8 && C<=15)
	{
		printf("Limpeza e utensilios domesticos.");
	}
	else if(C < 1 || C > 15)
	{
		printf("Invalido.");
	}
}