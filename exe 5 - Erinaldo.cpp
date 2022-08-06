/*5. Faça um programa para calcular a área e o perímetro de um hexágono. O programa deve implementar uma função chamada calc_hexa que calcula a área e
 o perímetro de um hexágono regular de lado L. O programa deve solicitar ao usuário o lado do polígono, calcular e imprimir a área e o perímetro do polígono. 
 O programa termina quando for digitado um valor negativo qualquer para o lado. A função deve obedecer o seguinte protótipo:

void calc_hexa(float l, float *area, float *perimetro);

Lembrando que a área e o perímetro de um hexágono regular são dados por:

area=3xL^2xraiz3/2

perimetro=6xL

Para os cálculos, obrigatoriamente você deve utilizar as funções sqrt e pow da biblioteca math.h.

sqrt => result = sqrt(number);(raiz)
pow => result = pow(base,power);(potencia)(base^power)
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void calc_hexa(float l, float *area, float *perimetro){
	*area=(3*pow(l,2)*sqrt(3))/2;
	*perimetro=6 * l;
}

int main(void){
	float l,area,perimetro;
	
	printf("Informe o lado do hexagono regular: ");
	scanf("%f",&l);
	
	if(l<0)
		printf("Digite um valor positivo \n");
	else{
		calc_hexa(l,&area,&perimetro);
		printf("Perimetro: %0.2f \t Area: %0.2f \n",perimetro,area);	
	}
	
}







