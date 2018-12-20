#include <stdio.h>
#define CAPACITY 5
void push(int);
int stack[CAPACITY],top=-1;
int isFull();


void main(){
	int ch;
	for(int i=0;i<6;i++){
		scanf("%d",&ch);
		push(ch);
	}

}


void push(int ch){
	if (isFull()){
		printf("Stack is full\n");

	}
	else{
		top=top+1;
		stack[top]=ch;
		printf("Inserted\n");

	}
}

int	isFull(){
		if(top==CAPACITY-1){
			return 1;
		}
		else{
			return 0;
		}
	}


