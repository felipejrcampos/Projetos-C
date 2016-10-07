#include <stdio.h>
int main()
{
	int i,SENHA;
	i = 0;
	for(i=0;i<3;i++)
	{
		printf("De a senha: ");
		scanf("%d",&SENHA);
		if(SENHA==99)
		{
		i=3;
		}
		
	}
	if(SENHA==99)
		{
			printf("Senha Liberada \n");
		}
		else
		{
			printf("Senha Bloqueada \n");
		}
}