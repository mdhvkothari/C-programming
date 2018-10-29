#include <stdio.h>
#include <stdlib.h>



// memory allocation at run time but size is fixed then its
//class static memory
//it fail to increse and decrease the size of array
// so we relloc instead of calloc
void main(){
 	int arr[5], *ar;
 	ar=(int*)calloc(5,sizeof(int));
 	if(ar== NULL){
		printf("Out of memory\n");
	}
	else{
		printf("Sucessfully allocate memory\n");
	}

}