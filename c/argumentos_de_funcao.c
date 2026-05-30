#include <stdio.h>

int sqr(int x);
void swap(int *x, int *y);

int main(){
	/*
	 * passagem por valor
	 */
	int t = 10;
	int s = sqr(t);

	printf("s = %d\n t = %d",s,t);
	/*
	 *fim passagem por valor
	 */

	/*
	 * passagem por referencia
	 */

	int i = 10,j = 20;

	swap(&i,&j);

	printf("\nPassagem ppr referencia:\n i = %d\n j = %d\n",i,j);

}

int sqr(int x){
	x = x*x;
	return x;
}

void swap(int *x, int *y){
	int temp;
	
	temp = *x;
	*x = *y;
	*y = temp;
}
