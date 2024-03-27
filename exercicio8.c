/*8) Escreva um algoritmo que peça para o usuário informar a sua idade e, em seguida, calcule e apresente o
dobro e o triplo da idade informada.*/

#include <stdio.h>

int main()

{
	int idade;
	int dobro, triplo;
	
	printf("informe a sua idade\n");
	scanf("%d", &idade);
	
	dobro = idade * 2;
	triplo = idade * 3;
	
	printf("o dobro da idade e: %d\n", dobro);
	printf("o triplo da idade e: %d\n", triplo);
	

}
