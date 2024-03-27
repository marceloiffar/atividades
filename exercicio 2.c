/*2) Escreva um algoritmo para ler dos valores para as variáveis A e B. O algoritmo deve efetuar a troca dos
valores, de forma que a variável A passe a possuir o valor de B e a variável B passe a possuir o valor de
A. O algoritmo deve apresentar os valores ao usuário, antes e depois da troca.*/

#include <stdio.h>

int main(){
	
	int a, b , temp;
	
	printf("digite o valor de a \n");
	scanf("%d", &a);
	printf("digite o valor de b \n");
	scanf("%d", &b);
	
	printf("valor antes da troca %d %d\n", a, b);
	
	temp=a;
	a=b;
	b=temp;
	
	printf("valor depois da troca %d %d\n",a ,b);
	
	return 0;
	
	
}

