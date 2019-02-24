#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* link;
};

struct node* root=NULL;

void append(int);
void print();

void main(){
    append(10);
    print();
    append(20);
    append(30);
    append(40);
    print();
    
}


void append(int data){
    struct node* temp;
    temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->link = NULL;
    if(root==NULL){
        root = temp;
    }
    else{
        struct node* p;
        p=root;
        while(p->link!=NULL){
            p=p->link;
        }
        p->link=temp;
        temp->link=root;
    }
}

void print(){
    struct node* temp;
    temp=root;
    int i=0;
    while(i==2){
        printf("%d ->",temp->data);
        temp = temp->link;
        i++;
    }
    printf("\n");
}


