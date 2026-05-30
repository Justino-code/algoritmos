#include <stdio.h>

int matriz[3][3];

void init_matriz(void);
void get_sec_diagonal();

int main(){
	init_matriz();
	get_sec_diagonal();

	return 0;
}

void init_matriz(void){
	register int i,j;

	for(i = 0; i < 3; i++)
		for(j = 0; j < 3; j++)
			matriz[i][j] = (i+1)*j;
}

void get_sec_diagonal(void){
	register int i;
	int len = 3;

	for(i = 0; i < 3; i++){
		len -= 1;

		printf("%d ",matriz[i][len]);
	}

	printf("\n");
}
