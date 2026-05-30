
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
  FILE *fp;
  char ch;

  if(argc != 2){
    printf("voce esqueceu de digitar o nome do arquivo\n");

    exit(1);
  }else{
    fp = fopen(argv[1], "w");

    if(fp == NULL){
      printf("o arquivo nao pode ser aberto\n");
      exit(1);
    }

    do {
      ch = getchar();

      putc(ch, fp);
    }while(ch != '$');

    fclose(fp);
  }
}
