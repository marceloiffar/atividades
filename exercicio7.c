/*7) Desenvolva um algoritmo para calcular a quantidade de litros de combust�vel que um autom�vel que faz
m�dia de 12Km/L precisa para uma viagem. O usu�rio deve informar a dist�ncia do trajeto e o algoritmo
deve calcular a quantidade de litros atrav�s da seguinte f�rmula: LitrosUsados = dist�ncia / 12*/

#include <stdio.h>

int main(){
	
	float distancia, litrosusados;
	
	printf("informe a distancia em quilometro\n");
	scanf("%f", &distancia);
	
	litrosusados= distancia / 12;
	
	printf("para percorrer %.2f km, precisaria de %.2f litros\n", distancia, litrosusados);
	
	
}
