#include <stdio.h>

char c(char a);

int main(){
	printf("Critografia e: %c\n", c('a'));
	return 0;
}

char c(char a){
	return (~a);
}
