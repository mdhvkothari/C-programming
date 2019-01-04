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
void length();
void addstart(int );
void between();

void main(){
	data(100);
	append(10);
	print();
	length();
	append(20);
	print();
	length();
	addstart(5);
	print();
	length();
	between();
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
	temp = root;
	if(temp == NULL){
		printf("Linked list is empty\n");
	}
	else{
		while(temp!=NULL){
			printf("%d-->",temp->data);
			temp = temp->link;
		}
		printf("\n");
	}
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
			p=p->link;
		}
		p->link = temp;

	}

}

void length(){
	struct node* temp;
	int count=0;
	temp=root;
	while(temp!=NULL){
		count++;
		temp = temp->link;
	}
	printf("%d\n",count);

}

void addstart(int data){
	struct node* temp;

	temp = (struct node*)malloc(sizeof(struct node));

	temp->link = root;

	temp->data = data;

	root = temp;

}


void between(){
	struct node* temp;
	struct node* p;
	p = root;
	temp = (struct node*)malloc(sizeof(struct node));


	temp->data = 88;

	temp->link = NULL;

	for(int i=0;i<1;i++){
		p = p->link;
	}	

	temp->link = p->link;
	p->link = temp;


}


