#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *right;
	struct node *left;

};

struct node* root = NULL ;

void append(int);
void print();

void main(){
	append(10);
	print();
	append(20);
	print();

}


void append(int data){
	
	struct node* temp;
	
	temp = (struct node*)malloc(sizeof(struct node));

	temp->data = data;

	temp->left = NULL;

	temp->right = NULL;

	if(root == NULL){
		root = temp;
	}
	else{

		struct node* p;

		p = root;

		while(p->right!=NULL){
			p = p->right;
		}

		p->right = temp;
		temp->left = p;



	}

}


void print(){
	struct node* temp;
	temp = root ;

	while(temp!=NULL){
		printf("%d-->",temp->data);
		temp = temp->right;
	}
	printf("\n");
}
