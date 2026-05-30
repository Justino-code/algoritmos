#include <stdio.h>

void check(int *a, int *b, int (*cmp) (const int *, const int *)); 
int cmp_int(const int *a, const int *b);

int main(){
	 
	int a ,b;

	a = 5;
	b = 5;

	check(&a,&b, cmp_int);
	return 0;
}

void check(int *a, int *b, int (*cmp) (const int *, const int *)){
	if((*cmp) (a,b))
		printf("iguais");
	else
		printf("diferentes");
}

int cmp_int(const int *a, const int *b){
	if(*a == *b)
		return 1;
	else
		return 0;
}
