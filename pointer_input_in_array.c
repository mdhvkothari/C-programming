#include <stdio.h>

void main(){
	int array[]={};
	int i, *ptr,input;
	printf("%s\n","Enter length of array:" );
	scanf("%d",&input);
	ptr = &array[0];
	for (i=0;i<input;i++){
		scanf("%d",&array[i]);
		
		printf("%p\n", ptr);
		ptr++;
	}
}