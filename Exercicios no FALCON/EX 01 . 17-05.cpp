#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i,NUM;
	for(i=0;i<=10;i++)
	{
		for(NUM=0;NUM<=10;NUM++)
		printf("%d * %d = %d\n",i,NUM,i*NUM);
		system("pause");
	}
}