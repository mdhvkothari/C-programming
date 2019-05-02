#include <stdio.h>

void address();


void main(){
	int i;
	int array[] = {1,2,4,3};
	address(array);
	
	
}

void address(int *array){
	int i;
	for(i=0;i<4;i++){
		printf("%d",array[i]);
	}
}
