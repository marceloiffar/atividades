/*7) Desenvolva um algoritmo para calcular a quantidade de litros de combustível que um automóvel que faz
média de 12Km/L precisa para uma viagem. O usuário deve informar a distância do trajeto e o algoritmo
deve calcular a quantidade de litros através da seguinte fórmula: LitrosUsados = distância / 12*/

#include <stdio.h>

int main(){
	
	float distancia, litrosusados;
	
	printf("informe a distancia em quilometro\n");
	scanf("%f", &distancia);
	
	litrosusados= distancia / 12;
	
	printf("para percorrer %.2f km, precisaria de %.2f litros\n", distancia, litrosusados);
	
	
}
