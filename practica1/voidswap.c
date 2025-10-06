void swap

#include<stdio.h>
void sawp(int *a, int *b);

int main(){
	int x=20, y=15;
	printf("antes del intercambio: x=%d, y=%d", x,y);
	
	swap(&x,&y);
	
	printf("despues del intercambio x=%d, y=%d", x,y);
}

void swap(int *a, int *b){
	int tem=*a;
	*a=*b;
	*b=tem;
}


