#include <stdio.h>

void puts1(char *s);
void putstr1(char *s);
void count_char(char *s);

int main(){
	puts1("Ola mundo\n");
	putstr1("Ola mundo com putstr");
	count_char("Ola mundo");
}

void puts1(char *s){
	register int t;

	for(t = 0; s[t]; t++)
		putchar(s[t]);
}

void putstr1(char *s){
	while(*s) putchar(*s++);
}

void count_char(char *s){
	int i = 0;
	while(*s)
		i++;
	
	printf("%i",i);
}
