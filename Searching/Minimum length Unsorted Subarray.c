#include <stdio.h>

void printUnsorted(int arr[],int n){
	int s,e=n-1,max,min,i;
	
	for(s=0;s<n-1;s++){
		if(arr[s]>arr[s+1])
			break;
	}
	if(s==n-1){
		printf("Array is sorted");
	}
	
	for(e=n-1;e>0;e--){
		if(arr[e]<arr[e-1])
			break;
	}
	
	min = arr[s];
	max = arr[s];
	
	for(i=s+1;i<=e;i++){
		if(arr[i]>max)
			max = arr[i];
		if(arr[i]<min)
			min = arr[i];
	}
	
	for(i=0;i<s;i++){
		if(arr[i]>min){
			s = i;
			break;
		}
	}
	
	for(i=n-1;i>e+1;i--){
		if(arr[i]<min){
			e = i;	
			break;	
		}
	}
	
	printf(" The unsorted subarray which makes the given array sorted lies between the indees %d and %d", s, e);
	
}


void main(){
	int arr[] = {0, 1, 15, 25, 6, 7, 30, 40, 50}; 
  	int arr_size = sizeof(arr)/sizeof(arr[0]); 
  	printUnsorted(arr, arr_size);  
	getchar(); 

}



