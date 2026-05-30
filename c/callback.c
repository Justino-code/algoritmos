#include <stdio.h>

int soma(int a, int b);
int mult(int a, int b);
int subtrair(int a, int b);

void calcular(int a, int b, int (*operacao) (int, int));

int main(){
	int a = 10;
	int b = 3;

	calcular(a,b,soma);
	calcular(a,b,mult);
	calcular(a,b,subtrair);

	return 0;
}

int soma(int a, int b){
	return a+b;
}

int mult(int a, int b){
	return a*b;
}

int subtrair(int a, int b){
	return a-b;
}

void calcular(int a, int b, int(*operacao)(int,int)){
	printf("\nResultado: %d\n",operacao(a,b));
}
