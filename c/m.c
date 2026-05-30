#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

#define CLASSE 3
#define GRADES 5

int grades[CLASSE][GRADES];

int main(){
	int i,j;

	for(i=0;i<CLASSE;i++){
		printf("turma %d\n",i+1);
		for(j=0;j<GRADES;j++){
			printf("nota%d ",j+1);
		}
		printf("\n");
	}
}
