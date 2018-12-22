#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node* link;
};

struct node* root = NULL;

void data(int);
void print();
void append(int);

void main(){
	data(100);
	data(20);
	data(50);
	print();
	append(10);
	print();
}


void data(int data){
	struct node* temp;
	temp = (struct node*)malloc(sizeof(struct node));
	
	temp->data = data;

	temp->link = root;

	root = temp;

}

void print(){
	struct node* temp;
	printf("[data] =>");
	while (temp!=NULL){
		printf("%d =>",temp->data );
		temp = temp->link;
	}
	printf("[null]\n");
}

void append(int data){

	struct node* temp;

	temp= (struct node*)malloc(sizeof(struct node));

	temp->data = data;

	temp->link = NULL;
	//when list is empty is will take first position
	if (root == NULL){
		root = temp;
	}
	// append at the end
	else{
		struct node* p;
		p = root;
		while(p->link!=NULL){
			p = p->link;
		}
		p=temp;

	}

}