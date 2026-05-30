#include <stdio.h>

int menor(int arr[], int n);
int main(){
	int arr[5] = {6,7,8,8,2};
	int m = menor(arr,5);
	printf("\n\t%d\n",m);
}

int menor(int arr[], int n){
	int m = arr[0];

	for(int i = 0; i < n; i++){
		if(arr[i] < m){
			m = arr[i];
		}
	}

	return m;
}
