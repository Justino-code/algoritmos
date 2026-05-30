#include <stdio.h>

int *insertion(int *arr, int len);

int main(){
	int arr[] = {5,8,2,1,8};

	int *p = insertion(arr,5);

	for(int i = 0; i < 5; i++){
		printf("%d", p[i]);
	}

	return 0;
}

int *insertion(int *arr, int len){
	int eleito;
	register int i, j;

	for(i = 0; i < len; i++){
		eleito = arr[i];
		j = i -1;

		while(j >= 0 && arr[j] > eleito){
			arr[j+1] = arr[j];
			j = j - 1;
		}

		arr[j+1] = eleito;
	}

	return arr;
}
