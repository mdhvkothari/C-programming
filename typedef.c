#include <stdio.h>

void main(){
	 typedef int my_int;
	 my_int a=5,b=10,c;
	 c=a+b;
	 printf("%d\n", c);

	 typedef int arr[5];
	 arr x ={10,20,30,40,50};
	 for (int i=0;i<5;i++){
	 	printf("%d\n",x[i] );
	 }
}