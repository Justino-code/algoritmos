#include <stdio.h>

void bubble(int *lista,int len);

int main(){
	int arr[] = {5,8,7,9,2};

	int len = sizeof(arr)/sizeof(arr[0]);

	bubble(arr,len);

	for(int i = 0;i < len; i++){
		printf("%d",arr[i]);
	}
}
void bubble(int *l,int len){
	int register i, j, aux=0;

	for(i = 0; i < len; i++){
		for(j = len; j>i; j--){
			if(l[j] < l[j-1]){
				aux = l[j];
				l[j] = l[j-1];
				l[j-1] = aux;
			}
		}
	}
}
