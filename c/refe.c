#include <stdio.h>

int add(int a, int *b);

int main(){
	int a = 12;
	int b = 17;

	add(a,&b);

	printf("%d\n%d",a,b);
	return 0;
}

int add(int a, int *b){
	a = 10;
	*b = 3;

	return a;
}
