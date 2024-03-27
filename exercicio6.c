/*6) Escreva um algoritmo que receba um valor em Real e a cotação do Dólar, calcule a conversão do valor e,
como saída, apresente o valor a ser convertido (R$), a cotação do Dólar e o valor da conversão ($).
Exemplo:
Entrada:
Informe a cotação do Dólar: 3,81
Informe a quantidade de Reais a ser convertida: 15
Saída:
Cotação do Dólar: R$ 3,81
Valor em Real: R$ 15,00
Valor em Dólar: $ 3,93*/
#include <stdio.h>

int main()
{
	float cotacao_dolar, valor_real, valor_dolar;
	
	printf("informe a cotaçao do dolar");
	scanf("%f", &cotacao_dolar);
	printf("informe quantidade de reais a ser convertida");
	scanf("%f", &valor_real);
	
	valor_dolar= valor_real / cotacao_dolar;
	
	printf("cotaçao do dolar:R$ %.2f\n", cotacao_dolar);
	printf("valor do real:R$ %.2f\n", valor_real);
	printf("valor em dolar:$ %.2f\n", valor_dolar);
	


	
	}
