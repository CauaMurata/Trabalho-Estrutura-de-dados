/*4. Escreva um programa que declare uma matriz 10x10 de inteiros. Você crie uma função void (procedimento) para inicializar a matriz 
com zeros usando um ponteiro para a matriz. Faça outra função void para preencher depois a matriz com os números de 99 a 0, também usando 
ponteiro para matriz como parâmetro. Por fim, o programa deve imprimir a matriz.
*/

#include <stdio.h>
#include <stdlib.h>

void iniciar(int mat[10][10]){
	for(int x=0;x<10;x++){
		for(int y=0;y<10;y++){
			mat[x][y]=0;
		}
	}
}

void preencher(int mat[10][10]){
	int cont=99;
	for(int x=0;x<10;x++){
		for(int y=0;y<10;y++){
			mat[x][y]=cont;
			cont--;
		}
	}
}

int main(void){
	int matriz[10][10];
	
	iniciar(matriz);
	preencher(matriz);
	
	for(int x=0;x<10;x++){
		for(int y=0;y<10;y++){
			printf("%d ",matriz[x][y]);
		}
		printf("\n");
	}
}


