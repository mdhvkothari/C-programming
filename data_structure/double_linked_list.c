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
void addfirst(int);
void length();

void main(){
	append(10);
	print();
	length();
	append(20);
	print();
	length();
	addfirst(50);
	print();
	length();


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


void addfirst(int data){

	struct node* temp;
	
	temp = (struct node*)malloc(sizeof(struct node));
	
	temp->data = data;
	temp->left = NULL;
	temp->right = NULL;

	//if there is no node present in the list then

	if(root == NULL){
		root  = temp;
	}
	//when some nodes are already present
	else{
		//first we have to connect right site then left

		temp->right = root;
		root->left = temp;

		root = temp;

	}
}

void length(){
	struct node* temp;
	temp = root;
	int count=0;
	while(temp!=NULL){
		count++;
		temp = temp->right;
	}
	printf("%d\n",count );
}