#include <stdio.h>
//time complexity is O(n^2)
//The algorithm maintains two subarrays in a given array.
//1) The subarray which is already sorted.
//2) Remaining subarray which is unsorted.

void swap(int *x,int *y){
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

void selectionSort(int arr[],int n){
	int i,j,min_index;
	
	for(i=0;i<n-1;i++){
		min_index = i;
		for(j=i+1;j<n;j++){
			if(arr[j]<arr[min_index]){
				min_index =j;
			
			}	
		}
		swap(&arr[min_index],&arr[i]);
	}
}

void printArray(int arr[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}

void main(){
	int arr[] = {64, 25, 12, 22, 11}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    selectionSort(arr, n); 
    printf("Sorted array: \n"); 
    printArray(arr, n); 
	
}
