#include <stdio.h>

void func();

static int count = 5;

int main(){

	while (count--){
		func();
	}

}

void func(){
	static int i = 5;

	i++;
	printf("i is %d and count is %d\n", i,count);
}

