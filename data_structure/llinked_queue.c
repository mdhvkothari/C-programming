#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node* link;
};

struct node* front = NULL;
struct node* rear = NULL;

void insert(int data);
void delete();
void print();

void main(){
	insert(10);
	insert(20);
	insert(30);
	print();
	delete();
	print();
	insert(40);
	print();
}

void insert(int data){
	struct node* temp = (struct node*)malloc(sizeof(struct node));
	temp->data = data;
	temp->link = NULL;
	if(front==NULL){
		front = rear= temp;
		printf("Successfully inserted \n");
	}
	else{
		rear->link = temp;
		rear= temp;
		printf("Successfully inserted \n");
	}
}

void delete(){
	struct node* temp = front;
	if(front==NULL){
		printf("Linked Queue is Empty \n");
	}
	else if(front == rear){
		front = rear = NULL;
		printf("Successfully deleted \n");
	}
	else{
		front = front->link;
		printf("Successfully deleted \n");
	}
	free(temp);
}

void print(){
	struct node* temp = front;
	if(front == NULL){
		printf("Linked Queue is empty \n");
	}
	else{
		while(temp!=rear){
			printf("%d-->",temp->data);
			temp= temp->link;
		}
		printf("\n");
	}
}


