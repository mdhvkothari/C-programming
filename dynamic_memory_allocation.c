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
	
	
 



}


