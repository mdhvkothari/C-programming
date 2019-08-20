#include <stdio.h>
#include <conio.h>

int binarySearch(int arr[],int,int,int);

int exponentialSearch(int arr[],int n int x){
	if(arr[0]==n){
		return 0;
	}
	
	int i=1;
	while(i<n && arr[i]<=x)
	i=i*2;
	
	return binarySearch
}
