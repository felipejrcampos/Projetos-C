#include <stdio.h>

int main()
{
	char NOME[30];
	char SOBRENOME[30];
	int IDADE;
	printf("Digite seu Nome:\n");
	scanf("%s",NOME);
	printf("Digite seu Sobrenome:\n");
	scanf("%s",SOBRENOME);
	printf("Digite sua Idade:\n");
	scanf("%d",&IDADE);
	printf("Seja bem vindo ao mundo dos algoritimos e da programacao.\n");
	printf("%s %s que tem %d anos",NOME,SOBRENOME,IDADE);
}
