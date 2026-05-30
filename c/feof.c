

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
  FILE *in, *out;

  char ch;

  if(argc != 3){
    printf("voce esqueceu de informar o nome ro arquivo\n");
    
    exit(1);
  }else{
    in = fopen(argv[1], "rb");
    out = fopen(argv[2], "wb");

    if(in == NULL){
      printf("Arquivo-fonte nao pode ser aberto\n");

      exit(1);
    }

    if(out == NULL){
      printf("Arquivo-destino nao pode ser aberto\n");
      exit(1);
    }

    while(!feof(in)){
      ch = getc(in);

      if(!feof(in)){
        putc(ch, out);
      }
    }
    
    fclose(in);
    fclose(out);

  } 
}
