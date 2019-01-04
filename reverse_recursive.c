#include <stdio.h>

int reverse(int);


void main(){
	int a=123;
	int x;
	x=reverse(a);
	printf("%d\n",x);


}

int reverse(int a){
	int sum=0,r;
	if(a){
		r=a%10;
		sum=sum*10+r;
		reverse(a/10);
	}
	else{
		return sum;	
	}
	return sum;

	

}