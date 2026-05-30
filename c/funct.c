#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	if(argc < 2){
		printf("voce esqueceu de digitar o seu nome");
		exit(1);
	}else{
		printf("nome digitado: %s",argv[1]);
	}
}
