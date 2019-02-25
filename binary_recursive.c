#include <stdio.h>

int search(int [],int,int,int);


void main() {
  int arr[5],key;
  printf("Enter array element\n");
  for (int i=0;i<5;i++){
    scanf("%d\n", &arr[i]);
  }
  printf("Enter key:\n");
  scanf("%d\n",&key );
  int low=0,mid,high=4,pos;
  pos=search(arr,key,low,high);
  printf("%d\n", pos);

}

int search(int arr[],int key,int low,int high){
  int mid;

  mid=(high+low)/2;
  if(arr[mid]==key){
    return mid;
  }
  else if(key<arr[mid]){
    search(arr,key,low,mid-1);
  }
  else{
    search(arr,key,mid+1,high);
  }
}
