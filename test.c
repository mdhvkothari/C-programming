#include <stdio.h>
#include <stdlib.h> 


void search(int arr[],int lenght){
	int i,j,element,index;
	for(i=0;i<lenght;i++){
		int count=0;
		element = arr[i];
		for(j=0;j<lenght;j++){
			if(i!=j){
				if(arr[j]!=element)
					count++;
			}
		}
		index++;
		if(count==lenght-1){
			printf("%d \n",arr[index-1]);
			break;
			
		}
	}	

}

	

int main(){
	int testCase,i=0,j,length;
	int *v;
	scanf("%d",&testCase);
	while(i<testCase){
		scanf("%d",&length);
		int arr[length];
		v = malloc(length * sizeof(int));
		for(j=0;j<length;j++){
			scanf("%d",&arr[j]);
		}
		free(v);
		i++;
		search(arr,length);
	}
}
