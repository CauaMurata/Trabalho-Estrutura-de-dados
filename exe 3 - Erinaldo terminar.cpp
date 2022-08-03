/* 3. Faça um programa que modifique as vogais de uma frase. O programa deve ler uma frase (max. 100 caracteres) 
e armazená-la num vetor. Imprimir a frase lida trocando as vogais, isto é, trocar 'a' pelo 'u', 'e' pelo 'o', 
'i' pelo 'u', 'o' pelo 'a' e o 'u' pelo 'e'. Usar uma função void (procedimento) para realizar a troca e uma função 
para realizar a impressão da frase trocada. A função deve ter como parâmetro um ponteiro char referente ao vetor. 
Dica: Use a função gets() da biblioteca string.h para realizar a leitura da frase. use o switch para realizar as trocas.
Só considere as letras minúsculas.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void troca(char frase[]){
	char tmp;
	for(int x=0;x<strlen(frase);x++){
		tmp=frase[x];
		switch(tmp){
			case 'a':
				frase[x]='u';
				break;
			case 'e':
				frase[x]='o';
				break;
			case 'i':
				frase[x]='u';
				break;
			case 'o':
				frase[x]='a';
				break;
			case 'u':
				frase[x]='e';
				break;
			default:break;
		}
	}
}

void imprimir(char palavra[]){
	printf("Frase trocada  : %s \n", palavra);
}

int main(void){
	char frase[100];
	printf("Digite uma frase com ate 100 caracteres: ");
	gets(frase);	
	
	system("cls");
	printf("Frase informada: %s \n",frase);
	troca(frase);
	imprimir(frase);
}
