//2. Seja o trecho de código a seguir, que valor de c será impresso no comando printf?


#include <stdio.h>

int main(void){
	int a=5, b=12, c;
	int *p;
	int *q;
	p = &a;
	q = &b;
	c = *p + *q;
	printf("c = %d", c);

}

// Resposta: c vale 17
