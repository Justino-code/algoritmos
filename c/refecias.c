#include <stdio.h>

void add(int a, int *b);

int main(){
	int a = 5;
	int b;

	add(a,&b);

	printf("O valor de a: %d\n", a);
	printf("O valor de b: %d\n",b);
}

void add(int a, int *b){
	a = 7;
	*b = 20;
}
