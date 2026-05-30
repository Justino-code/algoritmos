#include <stdio.h>

int count(arr[]);

int main(){

	int arr[] = {1,2,3,4,5,6};
	printf("%d\n",count(arr));
}

int count(int arr[]){
	count = sizeof(arr)/sizeof(arr[0]);

	return (int)count;
}
