#include <stdio.h>

#define CAPACITY 5
int stack[CAPACITY],top=-1;

int peak();
int isEmpty();
void push(int element);
int isFull();

void main(){
	push(10);
	push(20);
	push(30);
	push(40);
	push(50);
}
void push(int element){
	if (isFull()){
		printf("Stack is full\n");
	}
	else{
		top=top+1;
		element=stack[top];
		printf("inserted\n");
	}
}
int isFull(){
	if (top==CAPACITY-1){
		return 0;
	}
		
	else{
		return 1;
	}
		
}

int peak(){
	if (isEmpty()){
		return 0;

	}
	else{
		return stack[top];
	}
}
int isEmpty(){
	if(top==-1)
		return 0;
	else
		return 1;
}