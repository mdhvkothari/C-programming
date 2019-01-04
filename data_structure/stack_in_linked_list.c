#include <stdio.h>
#include <stdlib.h>


struct node{
	int data;
	struct node* link;
};

struct node* top = NULL;

void push(int);
void pop();
//for display the data in stack called traverse
void traverse();
void main(){

	push(12);
	push(13);
	traverse();
	pop();
	traverse();
}

void push(int data){

	struct node* temp;

	temp = (struct node*)malloc(sizeof(struct node));

	temp->data = data;

	temp->link = top;

	top = temp;

}

void pop(){

	struct node* temp;
	if(top == NULL){
		printf("No element is present\n");
	}
	else{
		temp = top;
		printf("Element to be deleted:%d\n",temp->data);
		top = top->link;
		temp->link = NULL;
		free(temp);
	}



}

void traverse(){
	struct node* temp;
	if(top == NULL){
		printf("No element is present\n");
	}
	else{
		temp = top;
		while(temp!=NULL){
			printf("%d ",temp->data);
			temp = temp->link;
		}
		printf("\n");
	}

}