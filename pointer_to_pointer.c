#include <stdio.h>

void main(){
	int a=300;
	int *ptr, **ptrr;
	ptr = &a;
	ptrr = &ptr;
	printf("Address of *ptr: %p\n", ptr);
	printf("Value of ptr: %d\n", *ptr );
	printf("Address of **ptrr %p\n", ptrr);
	printf( "Value of ptrr: %d\n",**ptrr );
}