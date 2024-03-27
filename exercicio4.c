/*4) Desenvolva um algoritmo para um programa que leia três valores inteiros e apresente como resultado
o valor do quadrado da soma dos três valores lidos.*/
#include <stdio.h>

int main()
{
	int n1, n2, n3;
	int soma, result;
	
	printf("digite um valor intreiro\n");
	scanf("%d", &n1);
	printf("digite o segundo valor inteiro\n");
	scanf("%d", &n2);
	printf("digite o terceiro valor inteiro\n");
	scanf("%d", &n3);
	
	soma= n1+n2+n3;
	result=soma*soma;
	
	printf("resultado final %d\n", result);

}
