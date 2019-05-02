#include <stdio.h>

#define size 5

void add(int data);
void delete();
void print();
int queue[size];
int front=-1,rear=-1;

void main(){
	add(10);
	add(20);
	print();
	delete();
	print();
}


void add(int data){
	if((front==rear+1) || (front==0 && rear == size-1)){
		printf("Circular Queue is full!! \n");
	}
	else{
		if(front == -1) front = 0;
		rear = (rear+1)%size;
		queue[rear] = data;
		printf("Inserted -> %d \n",data);
	}
}

void delete(){
	if(front == -1 )
		printf("Stack is empty \n");
	else{
		int element;
		element = queue[front];
		if(front==rear){
			front = -1;
			rear = -1;
		}
		else{
			front = (front+1)%size;
			
		}
		printf("Element deleted -> %d \n",element);
		
	}
}

void print(){
	if(front == -1){
		printf("Queue is empty \n");
		
	}
	else{
		int i=0;
		for(i=front;i!=rear ; i= (i+1)%size){
			printf("%d ->",queue[i]);
		}
		printf("%d ",queue[i]);
		printf("\n");
	}
}
