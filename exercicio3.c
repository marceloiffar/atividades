/*3) Desenvolva um algoritmo para um programa que leia três valores inteiros e apresente como resultado o
valor da soma dos quadrados dos três valores lidos.*/
#include <stdio.h>

int main(){
	
	int n1, n2, n3;
	int soma2;
	
	printf("digite o primeiro valor\n");
	scanf("%d", &n1);
	printf("digite o segundo valor\n");
	scanf("%d", &n2);
	printf("digite o terceiro valor\n");
	scanf("%d", &n3);
	
	soma2= (n1*n1)+(n2*n2)+(n3*n3);
	
	printf("resultado e %d", soma2);
}
