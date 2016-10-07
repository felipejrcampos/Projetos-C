#include <stdio.h>

int main()
{
	float idade,N;
	char nome[30];
	printf("Qual o nome: ");
	scanf("%s",nome);
	printf("Qual a idade: ");
	scanf("%f",&idade);
	if(idade >= 18)
	{
		printf("Ele e maior de idade");
	}
	else
    {
		printf("Ele e menor de idade");
	}
}
