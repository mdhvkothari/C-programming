#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* link;
};

struct node* root = NULL;

void add(int data);
void print();

void main(){
    add(10);
    print();
    
}

void add(int data){
    struct node* temp;
    temp = (struct node*)malloc(sizeof(struct node));
    temp->data =data;
    temp->link = NULL;
    if(root = NULL){
        root = temp;
        temp->link = root;
    }
    else{
        struct node* p;
        p=root;
        while(p->link!=root){
            p=p->link;
        }
        p->link = temp;
        temp->link = root;
    }
    
}


void print(){
    struct node* temp;
    temp = root;
    if(temp==NULL)
        printf("List is empty");
    else{
        while(temp!=root){
            printf("%d->",temp->data);
            temp=temp->link;
        }
    }
}
