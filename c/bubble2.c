#include <stdio.h>

int *bubble(int *arr, int len);

int main(){
	int arr[] = {9,5,7,3,1};

	int *newArr = bubble(arr,5);
	
	for(int i = 0; i < 5; i++){
		printf("%d",newArr[i]);
	}
}

int *bubble(int *arr, int len){
	int n, aux, troca;
	register int i;

	n = 1;
	aux = 0;
	troca = 1;
	
	while(n < len && troca == 1){
		troca = 0;

		for(i = 0; i < (len-1); i++){
			if(arr[i] > arr[i+1]){
				troca = 1;
				aux = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = aux;
			}
		}

		n++;
	}

	return arr;
}
