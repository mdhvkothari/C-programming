#include <stdio.h>

void pointer(int , int );

void main(){
	int a=10,b=30;
	printf("Value of a and b before swap:\n");
	printf("%d %d \n", a,b);
	pointer(a,b);

}

void pointer(int x, int y){
	int temp;
	temp=x;
	x=y;
	y=temp;
	printf("Value of a and b after swap: \n");
	printf("%d %d\n",x,y );
}	





