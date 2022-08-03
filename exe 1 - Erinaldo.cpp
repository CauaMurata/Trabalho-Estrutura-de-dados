//1. Seja o trecho de código a seguir, quais serão os valores de x, y e *p no comando printf?

#include <stdio.h>

int main(void){
	int x, y, *p;
	y = 0;
	p = &y;
	x = *p;
	x = 4;
	(*p)++;
	--x;
	(*p) += x;
	printf("x=%d  y=%d *p=%d", x, y, *p);
}

//Resposta: x vale 3, y vale 4, *p vale 4.
