#include <stdio.h>
#include <stdlib.h>

struct emp
{
	
};


void main(){
	
	struct emp* ptr;

	// malloc return void pointer so we use type conversion
	//before malloc

	ptr=(struct emp*)malloc(sizeof(struct emp));

	if(ptr== NULL){
		printf("Out of memory\n");
	}
	else{
		printf("Sucessfully allocate memory\n");
	}


	// memory allocation at run time but size is fixed then its
	//class static memory

	
 	int arr[5];
 	int* ar;
 	ar=(int*)calloc(5,sizeof(int));
 	if(ar== NULL){
		printf("Out of memory\n");
	}
	else{
		printf("Sucessfully allocate memory\n");
	}



}


