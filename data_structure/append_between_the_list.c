#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node* link;
};

struct node* root = NULL;

void add(int);
void print();
void append(int);
void main(){
	add(10);
	add(20);
	add(30);
	add(40);
	print();
	append(50);
	print();

}

void add(int data){

	struct node* temp;
	
	temp = (struct node*)malloc(sizeof(struct node));

	temp->data = data;
	temp->link = root;

	root = temp;

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

void append(int data){
	struct node *temp, *p;
	p = root;
	temp = (struct node*)malloc(sizeof(struct node));

	temp->data = data;

	temp->link = NULL;

	for (int i=0;i<1;i++){
		p = p->link;
	}	
	temp->link = p->link;
	p->link = temp;

}

