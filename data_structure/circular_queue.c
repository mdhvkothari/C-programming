#include <stdio.h>

#define CAPACITY 5
void insert(int);
void delete();
void tranverse();
int front,rear=-1;
int cqueue[CAPACITY];
int data;
void main(){
  insert(10);
  insert(20);
  delete();
  tranverse();

}


void insert(int element){
  if(front == rear+1  || rear == CAPACITY-1 ){

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
  printf("Sucessfully insert\n" );
}


void delete(){
  if(front==-1 && rear == -1){
    printf("Queue is empty\n");
  }
  else if(front==rear){
    front=rear=-1;
  }
  else if(front==CAPACITY-1){
    data = cqueue[front];
    front =0;
  }
  else{
    data  = cqueue[front];
    front++;
  }
  printf("%d Sucessfully deleted\n",data );
}

// not working
void tranverse(){
  if(front==-1){
    printf("Queue is empty\n");
  }

  else if(front==0){
      for (int i=0;i<CAPACITY;i++){
        printf("%d\n",cqueue[i] );
      }
  }
}
