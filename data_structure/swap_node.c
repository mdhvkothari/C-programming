#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node* link;
};

struct node* root;

void add(int);
void print();
void swap(int);

void main(){
	add(10);
	add(20);
	add(30);
	add(40);
	add(50);
	print();
	//swap 30 and 40
	swap(1);
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
	while(temp!=NULL){
		printf("%d-->",temp->data);
		temp = temp->link;
	}
	printf("\n");

}

void swap(int place){

	struct node* p ,*q , *r;

	p = root;
	int i=1;
	while(i<place-1){
		p = p->link;
		i++;
	}

	q = p->link;
	r = q->link;

	q->link = r->link;
	r->link = q;
	p->link = r; 





}