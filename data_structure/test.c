#include <stdio.h>

#CAPACITY 5
void insert(int);
void delete();
void tranverse();
int front,rear=-1;
int cqueue[CAPACITY];
int data;
void main(){
  insert(10);
  insert(20);

}


void insert(int element){
  if(front == rear+1  || rear = CAPACITY-1 ){

  }
  else if(front==-1&&rear==-1){
    front=rear=0;
    cqueue[rear] = element;


  }
  else if(rear = CAPACITY-1){
    rear=0;
    cqueue[rear] = element;

  }
  else{
    rear ++;
    cqueue[rear] = element;
  }
}


void delete(){
  if(front==-1&& rear == -1){
    printf("Queue is empty\n");
  }
  else if(fornt==rear){
    front=rear=-1;
  }
  else if(fornt==CAPACITY-1){
    data = cqueue[front];
    front =0;
  }
  else{
    data  = cqueue[front];
    front++;
  }
}
