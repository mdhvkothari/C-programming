#include <stdio.h>
void main(){
	int array[] = {1,2,3,4,5};
	int index=3,k=5,item=10;
	int i=0,j=k;

	printf("Original array before insertion: \n");
	for ( i=0;i<k;i++){
		printf("a[%d]=%d \n",i,array[i] );

	}
	k=k+1;
	while(j>=index){
		array[j+1]=array[j];
		j=j-1;

	}
	array[index]=item;
	printf("after insertion:\n");
	for (i = 0; i < k; i++)
	{
		printf("a[%d]=%d\n",i,array[i] );
	}



}
