#include <stdio.h>
#include <stdlib.h>

struct node {
  int data;
  struct node* left;
  struct node* right;
};

struct node* root = NULL;


void insert(int);
void main(){
  insert(50);

}

void insert(int data){

  struct node  *t,*parent ;
  t = (struct node*)malloc(sizeof(struct node));
  t->data = data;
  t->left = NULL;
  t->right = NULL;

  parent= root;
  if(root == NULL){
    root = t;
  }

  else{
    struct node* current;
    current = root;
    while (current){
      parent = current;
      if (t->data > current->data){
        current = current->right;
      }
      else{
        current = current->left;
      }
    }
    if (t->data > parent->data){
        parent->right = t;
    }
    else{
      parent->left = t;
    }
  }
}
