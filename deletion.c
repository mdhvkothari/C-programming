#include <stdio.h>
void main(){
	int array[]={1,2,10,4,5};
	int length=5,index=3;
	int i=0,j=index;
	printf("Before insertion:\n");
	
	for (i=0;i<length;i++) {

		printf("array[%d]=%d\n",i,array[i]);
	}

	while(j<length){
		array[j-1]=array[j];
		j=j+1;
	}
	length=length-1;
	printf("After insertion:\n");
	
	for (i=0;i<length;i++) {

		printf("array[%d]=%d\n",i,array[i]);
	}

}