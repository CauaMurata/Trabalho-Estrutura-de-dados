//1. Seja o trecho de c�digo a seguir, quais ser�o os valores de x, y e *p no comando printf?

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
