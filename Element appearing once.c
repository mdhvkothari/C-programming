#include <stdio.h>

void search(int arr[],int low,int high){
	if(low>high)
		return;
	
	if(low==high)
		printf("%d",arr[low]) ;

	int mid = (low+high)/2;
	
	if(mid%2==0){
		if(arr[mid]==arr[mid+1]){
			search(arr,mid+2,high);
		}
		else{
			search(arr,low,mid);
		}
	}
	else{
		if(arr[mid]==arr[mid-1]){
			search(arr,mid+1,high);
		}
		else{
			search(arr,low,mid-1);
		}
	}

}

void main(){
	int arr[] = {1, 1, 2, 4, 4, 5, 5, 6, 6}; 
    int len = sizeof(arr)/sizeof(arr[0]); 
    search(arr, 0, len-1); 

}
