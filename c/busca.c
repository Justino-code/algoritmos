#include <stdio.h>

int busca(int lista[], int item);

int main(){
        int lista[] = {1,2,3,4,5,7,9,10};
        printf("%d",busca(lista, 4));
}

int busca(int lista[], int item){
    for(int i = 0; i < 8; i++){
        if (lista[i] == item){
            return i;
        }
    }

    return -1;
}
