/*5) Elabore um programa que leia dois valores e apresente os resultados das quatro operações aritméticas
básicas realizadas entre eles. Exemplo:
Entrada:
2 e 5
Saída:
2 + 5 = 7
2 – 5 = -3
2 x 5 = 10
2 : 5 = 0,4*/
#include <stdio.h>
int main()
{
	int a, b;

	
	printf("digite o valor de a \n");
	scanf("%d", &a);
	printf("digite o valor de b \n");
	scanf("%d", &b);
	
	printf("%d + %d =%d\n", a, b, a + b);
	printf("%d - %d =%d\n", a, b, a - b);
	printf("%d * %d =%d\n", a, b, a * b);
	printf("%d / %d =%.1f\n", a, b,(float) a / b);
	
	
	
}
