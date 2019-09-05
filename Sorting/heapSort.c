#include <stdio.h>

void swap(int *a , int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}


void heapify(int arr[],int n,int i){
	int largest = i;
	int l = 2*i+1;
	int r= 2*i+2;

	if(l<n && arr[l]>arr[largest]){
		largest = l;
	}
	if(r<n && arr[r]>arr[largest]){
		largest = r;
	}
	
	if(largest!=i){
		swap(&arr[i],&arr[largest]);
		heapify(arr,n,largest);
	}
}


void heapSort(int arr[],int n){
	//creating heap
	int i=0;
	for(i= n/2-1;i>=0;i--){
		heapify(arr,n,i);
	}
	//one by one extact element from heap
	for(i=n-1;i>=0;i--){
		swap(&arr[0],&arr[i]);
		heapify(arr,i,0);
	}
	
}


void print(int arr[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
}


void main(){
	int arr[] = {12, 11, 13, 5, 6, 7}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
  
    heapSort(arr, n); 
  
    print(arr,n);
}






