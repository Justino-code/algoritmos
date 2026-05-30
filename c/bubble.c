#include <stdio.h>

void bubble_sort(int arr[], int len);
void exibir(int arr[], int len);

int main(){
	int arr [] = {7,8,0,5,2,6,9,1,4};

	int len = sizeof(arr)/sizeof(arr[0]);

	bubble_sort(arr,len);

	exibir(arr,len);

	return 0;
}

void bubble_sort(int arr[], int len){
	int aux = 0;

	for(int i = 0; i < len; i++)
		for(int j = 0; j < (len-1); j++){
			if(arr[j] > arr[j+1]){
				aux = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = aux;
			}
		}
}

void exibir(int arr[], int len){
	for(int i = 0; i < len; i++){
		printf("%d ",arr[i]);
	}
}
