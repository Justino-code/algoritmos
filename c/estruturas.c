#include <stdio.h>
#include <stdlib.h>

struct num{
	int it;
	float fl;
};

int main(){
	struct num n;
	n.it = 10;
	n.fl = 6.5;

	printf("Nome: %d\nSobrenome: %f\n",n.it,n.fl);
	return 0;
}
