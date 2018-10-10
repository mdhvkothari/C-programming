#include <stdio.h>
#include <stdbool.h>

void main(){
	int array[5]={4,2 ,1,3,0};
	int a,temp;
	for (int i=0;i<5;i++){
		array[i]=a;
		for (int j=0;j<=i;j++){
			if a>array[j]:
				temp=a;
				a=array[j];
				array[j]=temp;

		}
	}
	for (int i=0;i<5;i++){
		printf("%d\n",array[i] );
	}
}