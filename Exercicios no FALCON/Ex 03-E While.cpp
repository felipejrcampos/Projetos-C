#include <stdio.h>

int main()
{
	int i = 1, NUM;
	printf("De um numero: \n");
	scanf("%d", &NUM);

	if(NUM > 0)
	{
		while(i <= NUM)
		{
			printf("%d", i);
			i++;
		}
	}
	else if(NUM < 0)
	{
		while(i >= NUM)
		{
			printf("%d", i);
			i--;

		}
	}
	return 0;
}
