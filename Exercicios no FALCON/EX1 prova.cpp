#include <stdio.h>
#include <string.h>

int main()
{
	int R,C,A,V;
	
	printf("De o valor do RAIO: \n");
	scanf("%d",R);
	C = 2 * 3,14 * R;
	A = 3,14 * (R * R);
	V = 3 * (3,14*(R * R * R))/4;
	printf("O comprimento da esfera eh %0.2d \n",C);
	printf("A area da esfera eh %0.2d \n",A);
	printf("O volume da esfera eh %0.2d \n",V);
}