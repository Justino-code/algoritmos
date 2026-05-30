#include <stdio.h>
#include <stdlib.h>

int main(){
	int *arr;
	int n, i;

	printf("digite o numero de elementos: ");
	scanf("%d",&n);

	arr = malloc(n*sizeof(int));

	if(arr == NULL){
		printf("Erro ao alocar memoria.\n");
		return 1;
	}

	printf("quantidade de memoria alocada: %zu bytes\n",n*sizeof(int));

	for(int i = 0; i < n; i++){
		arr[i] = i * 2;
	}
	
	printf("Elementos do array\n");

	for(int i = 0; i < n; i++){
		printf("%d",arr[i]);
	}
	
	printf("\n");

	free(arr);

	return 0;
}
