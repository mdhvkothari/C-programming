#include <stdio.h>

#define CAPACITY 5
int stack[CAPACITY],top=-1;
int isEmpty();
int pop();
int isFull();
void push( int element);



void main(){
	push(1);
	push(2);
	push(3);
	push(4);
	push(5);

	for (int i=top;i>=0;i--){
		printf("%d\n", stack[i]);
	}


	
}
void push(int element){
	if (isFull()){
		printf("Stack is full\n");
	}
	else{
		top=top+1;
		element=stack[top];
		printf("Sucessfully inserted\n");
	}
}

int pop(){
	int data;
	if (isEmpty()){
		printf("Stack is empty\n");
	}
	else{
		data=stack[top];
		top--;
		return data;
	}


}
int isFull(){
	if (top==CAPACITY-1){
		return 1;
	}
	else{
		return 0;
	}
}

int isEmpty(){
	if (top==-1){
		return 1;
	}
	else{
		return 0;
	}
}

