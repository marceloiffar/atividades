/*6) Escreva um algoritmo que receba um valor em Real e a cota��o do D�lar, calcule a convers�o do valor e,
como sa�da, apresente o valor a ser convertido (R$), a cota��o do D�lar e o valor da convers�o ($).
Exemplo:
Entrada:
Informe a cota��o do D�lar: 3,81
Informe a quantidade de Reais a ser convertida: 15
Sa�da:
Cota��o do D�lar: R$ 3,81
Valor em Real: R$ 15,00
Valor em D�lar: $ 3,93*/
#include <stdio.h>

int main()
{
	float cotacao_dolar, valor_real, valor_dolar;
	
	printf("informe a cota�ao do dolar");
	scanf("%f", &cotacao_dolar);
	printf("informe quantidade de reais a ser convertida");
	scanf("%f", &valor_real);
	
	valor_dolar= valor_real / cotacao_dolar;
	
	printf("cota�ao do dolar:R$ %.2f\n", cotacao_dolar);
	printf("valor do real:R$ %.2f\n", valor_real);
	printf("valor em dolar:$ %.2f\n", valor_dolar);
	


	
	}
