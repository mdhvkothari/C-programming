#include <stdio.h>
#include <stdbool.h>

void main(){
	int array[5]={4,2 ,1,3,0};
	int j,next_element;
	for(int i=1;i<=5;i++){
		j=i-1;
		next_element=array[i];
		while (array[j]>next_element && j>=0){
			array[j+1]=array[j];
			j=j-1;
		}
		array[j+1]=next_element;


	}
	for (int i = 0; i <5; ++i)
	{
		printf("%d\n", array[i]);
	}
}