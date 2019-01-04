#include <stdio.h>

int max(int num1, int num2);

int main(){
	int a,b;
	printf("Enter number first:\n");
	scanf("%d",&a);
	printf("Enter number second:\n");
	scanf("%d",&b);
	int calling;
	calling = max(a,b);

	printf("Max number is: %d\n",calling );
	return 0;



}

int max(int num1, int num2){
	int result;
	if (num1>num2){
		result = num1;

	}
	else{
		result = num2;
	}

	return result;
}