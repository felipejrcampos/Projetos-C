#include <stdio.h>
int main()
{
	int N;
	while(1)
	{
	printf("De a coloca�ao: ");
	scanf("%d",&N);
	if(N == 1) 
		printf("Top 1\n");
	else if(N >1 && N<=3)
		printf("Top 3\n");
	else if(N >3 && N<=5)
		printf("Top 5\n");
	else if(N >5 && N<=10)
		printf("Top 10\n");
	else if(N >10 && N<=25)
		printf("Top 25\n");
	else if(N >25 && N<=50)
		printf("Top 50\n");
	else if(N >50 && N<=100)
		printf("Top 100\n");
	else
		break;
	}
		printf("Coloca�ao invalida");
}