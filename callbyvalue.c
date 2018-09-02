#include <stdio.h>
void swap(int x, int y){
	int temp;
	temp = x;
	x = y;
	y = temp;

	return;
}

int main(){
	int a = 100;
	int b = 200;

	printf("Value of a before swaping :%d\n",a );
	printf("Value of b before swaping :%d\n",b );

	swap(a,b);

	/* &a indicate the positon of a vaibale a */

	printf("Value of a after swaping :%d\n",a );
	printf("Value of b after swaping :%d\n",b );
}