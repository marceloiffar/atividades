
/*1) Fa�a um algoritmo para calcular o volume de uma lata cil�ndrica atrav�s da seguinte f�rmula:
Vol = 3,14. r�. h. O algoritmo deve receber o valor do raio (r) e da altura (h) e, ap�s calcular o volume,
mostrar o resultado ao usu�rio. Procure empregar o conceito de constantes e vari�veis neste problema.*/

#include <stdio.h>

int main (){
	
	float pi= 3.14;
	float raio, altura, volume;
	
	printf("insira o valor da lata:\n");
	scanf("%f", &raio);
	printf("insira a altura da lata:\n");
	scanf("%f", &altura);
	
	volume= pi*raio*raio*altura;
	
	printf(" o volume da lata cilindrica e: %.2f" ,volume);
	
	
	
}
  
  

   
 


    

