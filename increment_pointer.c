#include <stdio.h>

void main(){
	int arrya[3]={10,20,30};
	int i, *ptr;
	ptr = &arrya[0];  /*here ptr store the address of the first elemnt of the array */

	for (i=0;i<3;i++){
		printf("Address of array[%d] is: %p\n",i, ptr);
		printf("Value at the address is: %d\n",*ptr );
		ptr++;
	}
}