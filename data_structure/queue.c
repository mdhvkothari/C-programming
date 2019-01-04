#include <stdio.h>

#define CAPACITY 5

int queue[CAPACITY];

// in queue FIFO is apply

int front = 0 ; //for deletion 

int rear = 0;  // for insersection

void insert(int);
void delete();
void traverse();


void main(){
	insert(10);
	insert(20);
	insert(30);
	insert(40);
	insert(50);
	traverse();
	delete();
	traverse();
	

}

void insert(int data){
	
	//first we have to check that the queue is full or not
	if(rear == CAPACITY){
		printf("Queue is full\n");
	}
	else{

		queue[rear] = data;
		rear++;
		printf("%d\n", rear);
	}


}


void delete(){
	// first we have to check that the queue is empty or not

	if(front == rear){
		printf("Queue is empty\n");
	}
	else{
		printf("Delected item is :%d\n",queue[front]);
		//after delection we have to shift all the elements of the queue
		//and we can not delete the data it overwrite
		for(int i=0;i<rear-1;i++){
			queue[i] = queue[i+1];
		}
		rear--;
	}

}


void traverse(){
	if(front == rear){
		printf("Queue is empty\n");
	}
	else{
		for(int i=front;i<rear;i++){
			printf("%d \n", queue[i]);
		}
	}
}










