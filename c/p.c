#include <stdio.h>

int main(){
	int count = 100;

	int *m,*q, *c;
	m = &count;
	q = m;

	c = q+1;
	printf("Valor de count: %d\n Endereco de memoria: %p\n c: %p", *m,q,c);

	return 0;
}
