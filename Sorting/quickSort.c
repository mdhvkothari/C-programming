#include<stdio.h>
#include<stdlib.h>

//in quick sort it will take O(n logn) for average case
//and O(n^2) for worse case
void Swap(int *a,int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int partition(int arr[],int start,int end){
	int pivot  = arr[end];
	int pIndex = start;
	int i;
	for(i=start;i<=end-1;i++){
		if(arr[i] <= pivot){
			pIndex++ ;
			Swap(&arr[i], &arr[pIndex]);	
		}
	}
	Swap(&arr[pIndex],&arr[end]);
	return pIndex;	
}

void quickSort(int arr[],int start, int end){
	if(start < end){
		int pIndex = partition(arr, start, end);
		quickSort(arr,start,pIndex-1);
		quickSort(arr,pIndex+1,end);
	}
}


void printArray(int arr[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        printf("%d ", arr[i]); 
	} 
  
int main() 
{ 
    int arr[] = {10, 7, 8, 9, 1, 5}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    quickSort(arr, 0, n-1); 
    printf("Sorted array: "); 
    printArray(arr, n); 
    return 0; 
} 



