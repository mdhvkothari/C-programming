#include <stdio.h>
#include <stdlib.h>
//structure of node
struct  node
{
	int data;
	struct node* link;
};
//root variable
struct node* root =  NULL;
void insert(int);
void printlist();
void main(){
	insert(10);
	insert(22);
	insert(23);
	printlist();	
}


void insert(int data){

	struct node* temp;
	temp = (struct node*)malloc(sizeof(struct node));

	temp->data = data;

	temp->link = root;

	root = temp;

}

void printlist(){
	struct node* temp;

	printf("\n[head] => ");
	while(temp!=NULL){
		printf("%d =>", temp->data);
		temp = temp->link;
	}
	printf("[null]\n");
}
