#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node* link;

};

struct node* root;

int length();
void add(int);
void delete(int);
int len;
void print();
void main(){
	add(10);
	add(20);
	add(30);
	add(40);
	len = length();
	printf("%d\n", len);
	print();
	delete(2);
	len = length();
	print();
	printf("%d\n",len );

}

void add(int data){
	struct node* temp;
	
	temp = (struct node*)malloc(sizeof(struct node));

	temp->data = data;

	temp->link = root;

	root = temp;


}

int length(){

	int count=0;
	struct node* temp;
	temp = root;
	while(temp!=NULL){
		count++;
		temp = temp->link;
	}

	return count;

}
void print(){
	struct node* temp;
	temp = root;
	while(temp!=NULL){
		printf("%d-->", temp->data);
		temp = temp->link;

	}
	printf("\n");
}

void delete(int place){
	struct node* temp;
	temp = root;
	if(place>length()){
		printf("Have no place\n");
	}
    else if(place==1){
			temp = root;
			root = temp->link;
			temp->link = NULL;
			free(temp);
		}
	
	else{
		struct node* p = root , *q;
		for(int i=1;i<place-1;i++){
			p=p->link;
			}
		q=p->link;
		p->link = q->link;
		q->link = NULL;
		free(q);
		}
	
}


