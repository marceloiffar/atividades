/*9) Faça um algoritmo que solicite a idade de 4 pessoas. O algoritmo deve calcular a média aritmética das
idades e apresentar o resultado na tela.*/

#include <stdio.h>

int main()
{
	int  i1, i2, i3, i4, total;
	float media;
	
	printf("informe a idade do joao\n");
	scanf("%d\n", &i1);//quando executo acaba pedindo duas idade nessa linha  
	printf("informe a idade da joana\n");
	scanf("%d\n", &i2);
	printf("informe a idade da rita\n");
	scanf("%d\n", &i3);
	printf("informe a idade do tielo\n");
	scanf("%d\n", &i4);
	
	total= i1+i2+i3+i4;
	media= total/4.0;
	
	printf("media de idade entre alunos e: %.2f\n", media);
	
}
