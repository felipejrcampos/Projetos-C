/*2. Imagine-se num quartel. Logo pela manh� foi dado o seguinte exerc�cio. Voc� dever� dar 10 voltas no quarteir�o

e a cada 2 voltas voc� dever� fazer 50 abdominais e 10 flex�es. Toda volta devera ser informada uma mensagem, e

cada abdominal e flex�o tamb�m, as mensagens devem seguir o modelo abaixo:

Volta n�mero ......

....... abdominal

Flex�o .......

a) Fa�a este algoritmo utilizando o comando para.

b) Fa�a este algoritmo utilizando o comando enquanto.*/
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