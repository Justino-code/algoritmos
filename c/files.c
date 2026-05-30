
#include <stdio.h>
#include <stdlib.h>

int main(){
  FILE *fp;
  int ch;
  
  fp = fopen("f.txt", "r");

  if(fp == NULL){
    printf("arquivo nao pode ser aberto\n");

    exit(1);
  }else{
    ch = getc(fp);
    while(ch != EOF){
      putchar(ch);
      ch = getc(fp);
    }

    fclose(fp);
  }
}
