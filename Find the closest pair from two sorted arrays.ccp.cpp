#include <iostream> 
#include <climits> 
#include <cstdlib> 
using namespace std; 

//Simple approch is to run two loop and check for every element its time complexity is O(n^2)
//but we can do it in O(1)
//1) Initialize a variable diff as infinite (Diff is used to store the 
//   difference between pair and x).  We need to find the minimum diff.
//2) Initialize two index variables l and r in the given sorted array.
//       (a) Initialize first to the leftmost index in ar1:  l = 0
//       (b) Initialize second  the rightmost index in ar2:  r = n-1
//3) Loop while  l = 0
//       (a) If  abs(ar1[l] + ar2[r] - sum) < diff  then 
//           update diff and result 
//       (b) If (ar1[l] + ar2[r] <  sum )  then l++
//       (c) Else r--    
//4) Print the result. 

void findClosest(int arr1[],int arr2[],int len1,int len2,int element){
	//first we have to define diff infinity
	int diff = INT_MAX;
	int l = 0;
	int r = len2-1;
	int indexOfArr1 ,indexOfArr2;
	
	while(l<len1 && r>=0){
		if(abs(arr1[l]+arr2[2]-element)<diff){
			indexOfArr1 = l;
			indexOfArr2 = r;
			diff = abs(arr1[l]+arr2[2]-element);
		}
		if(arr1[l]+arr2[r]>element)
			r--;
		else
			l++;
	}
	
	cout << "Index of arry1:"<<arr1[indexOfArr1]<< ", index of arry2 :"<<arr2[indexOfArr2];
	
}


int main(){
	
	int arr1[] = {1, 4, 5, 7}; 
    int arr2[] = {10, 20, 30, 40}; 
    int len1 = sizeof(arr1)/sizeof(arr1[0]); 
    int len2 = sizeof(arr2)/sizeof(arr2[0]); 
    int element = 50; 
    findClosest(arr1, arr2, len1, len2, element); 
    return 0;
}


