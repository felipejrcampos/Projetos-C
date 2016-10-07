/*2. Imagine-se num quartel. Logo pela manhã foi dado o seguinte exercício. Você deverá dar 10 voltas no quarteirão

e a cada 2 voltas você deverá fazer 50 abdominais e 10 flexões. Toda volta devera ser informada uma mensagem, e

cada abdominal e flexão também, as mensagens devem seguir o modelo abaixo:

Volta número ......

....... abdominal

Flexão .......

a) Faça este algoritmo utilizando o comando para.

b) Faça este algoritmo utilizando o comando enquanto.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
int V,A,F;

for(V=1;V<=10;V++)
{
	printf("Volta %d.\n",V);
	if(V%2==0)
	{
		for(A=1;A<=50;A++)
		{
			printf("Abdominal %d.\n",A);
		}
		for(F=1;F<=10;F++)
		{
			printf("Flexao %d.\n",F);	
		}
		system("pause");
	}	
}
}