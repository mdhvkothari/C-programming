#include<stdio.h>
//complexity is O(n^2)
//works like a playing cards in our hands

void inserctionSort(int arr[],int n){
	int i,key,j;
	for(i=0;i<n;i++){
		key = arr[i];
		j=i-1;
		
		while(j>=0 && arr[j]>key){
			arr[j+1] = arr[j];
			j=j-1;
		}
		arr[j+1] = key;
	}
}

void printArray(int arr[], int n){
	 int i;
	 for(i=0;i<n;i++){
	 	printf("%d ",arr[i]);
	 }
	
}

void main(){
	int arr[] ={  12, 11, 13, 5, 6 };
	int n = sizeof(arr)/sizeof(arr[0]);
	inserctionSort(arr,n);
	printArray(arr,n);	
}
