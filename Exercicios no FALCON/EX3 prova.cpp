#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
	int A,B,C;
	printf("Do o numeo de Alice: ");
	scanf("%d",&A);
	printf("Do o numeo de Beto: ");
	scanf("%d",&B);
	printf("Do o numeo de Clara: ");
	scanf("%d",&C);
	
	if(A ==0 && B ==0 && C ==0)
		printf("Nenhum Ganhador");
	else if(A ==1 && B ==1 && C ==1)
		printf("Nenhum Ganhador");
	else if(A ==1 && B ==0 && C ==0)
		printf("Alice Ganhou");
	else if(A ==0 && B ==1 && C ==0)
		printf("Beto ganhou");
	else if(A ==0 && B ==0 && C ==1)
		printf("Clara ganhou");
	else if(A ==1 && B ==1 && C ==0)
		printf("Clara ganhou");
	else if(A ==0 && B ==1 && C ==1)
		printf("Alice ganhou");
	else if(A ==1 && B ==0 && C ==1)
		printf("Beto ganhou");
	else
	{
		printf("Numero Invalido");
	}
}