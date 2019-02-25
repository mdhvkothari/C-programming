#include <stdio.h>

void main(){
	int array[5] = {1,2,3,4,5};
	int key = 4;
	int low,high,mid;
	low=0;high=4;
	while(low<=high){
		mid = (low+high)/2;
		if(array[mid] == key){
			printf("%d",mid);
			break;
			}
		else if(array[mid]<key)
			low=mid+1;
		else if(array[mid]>key)
			high = mid-1;
		}
	}

