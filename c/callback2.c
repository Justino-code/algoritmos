#include <stdio.h>

int s(int a, int b);
void soma(int a, int b, int (*s) (int , int ));

int main(){
  soma(10,2,s);
}

int s(int a, int b){
  return a+b;
}

void soma(int a, int b, int (*s) (int, int)){
  int r = s(a,b);
  printf("Soma: %d",r);
}
