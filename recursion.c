#include <stdio.h>

int factorial(int);

void main(){
	int n,a;
	printf("Enter number to find factorial:\n");
	scanf("%d",&n);
	a=factorial(n);
	printf("%d\n", a);
}

int factorial(int n){
	int result;
	if (n==0)
		result= 1;
	else
		result =n*factorial(n-1);
	return result;
}