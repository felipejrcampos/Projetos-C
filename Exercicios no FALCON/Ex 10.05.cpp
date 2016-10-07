#include <stdio.h>
int main()
{
	int I,S,R;
	R = 0;
	printf("De os numero:\n");
	for(I = 0;I < 10; I++)
	{
	scanf("%d",&S);
	R = S + R;
	}
	printf("A soma eh %d\n",R);
}