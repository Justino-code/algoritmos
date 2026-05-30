#include <stdio.h>

int main(){
	int arr[5] = {1,3,5,7,9};

	int tamanho = sizeof(arr)/sizeof(arr[0]);

	printf("%d",tamanho);
}
