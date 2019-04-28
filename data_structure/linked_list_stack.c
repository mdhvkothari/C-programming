#include<stdio.h>
#include<stdlib.h>

struct node{
	struct node* link;
	int data;
};

struct node* root = NULL;

void push(int data);
void pop();
void print();

void main(){
	push(10);
	push(20);
	push(30);
	print();
	pop();
	print();
	
}

void push(int data){
	struct node* temp = (struct node*)malloc(sizeof(struct node));
	temp->data = data;
	temp->link = NULL;
	if(root == NULL){
		root = temp;
	}
	else{
		struct node* t = root;
		while(t->link!=NULL){
			t= t->link;
		}
		t->link = temp;	
	}
}


void pop(){
	struct node *temp = root;
	struct node *t;
	while(temp->link!=NULL){
		t=temp;
		temp = temp->link;
	}
	free(t->link);
	t->link = NULL;	
	
}

void print(){
	struct node* temp;

	temp = root;

	if(temp == NULL){
		printf("List is empty\n");
	}
	else{
		while(temp!=NULL){
			printf("%d-->", temp->data);
			temp = temp->link;
		}
		printf("\n");
	}

}
