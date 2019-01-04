#include <stdio.h>
#include <stdbool.h>

int func(int array[],int a);

void main(){
	
	int array[5]={1,2,3,4,5};
	int nmber=2;
	int result= func(array,nmber);
	printf("Position of the element\n");
	printf("%d\n",result );
}	

int func(int array[],int a){
	int first=0,last=4,midpoint;
	bool found  = false;

	while (first<=last && found==false){
		midpoint = (first+last)/2;
		if (array[midpoint]==a){
			found = true;
			}
		else{
			if (a<array[midpoint]){
				last = midpoint-1;
				}
			else{
				last= midpoint+1;
				}
		}
	return last+1;
	}

}



