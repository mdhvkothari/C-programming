#include <stdio.h>
#include <stdlib.h>
//stack implementation using static array

#define CAPACITY 5  //pre processor

int stack[CAPACITY] , top=-1;
void push(int);
int pop();
int isFull();
int isEmpty();
void peek();
void print();

void main(){
	int ch,item;
	while(top!=CAPACITY-1){
		printf("1.Push \n");
		printf("2.Pop \n");
		printf("3.Check \n");
		printf("4.Printing Elements of Stack \n");
		printf("5.Quit \n");
		printf("Enter your choice: \n");
		scanf("%d",&ch);


		switch(ch){
		case 1 : printf("Enter element to push\n");
				scanf("%d",&item);
				push(item);
				break;

		case 2 : item = pop();
				if (item==0){
					printf("Stack is empty\n");
				}
				else{
					printf("poped item :%d\n",item );
				}
				break;
		case 3 : peek();
				 break;
		case 4 : print();
			    	break;
		case 5 : exit(0);
		default : printf("Enter number is not valid\n");
		}

	void push(int ele){
		//first we have to check that stack is full or not
		if(isFull()){
			printf("Stack is full!!!\n");
		}

		else{
			top++;
			stack[top] = ele;
			printf("Element inserted\n");
		}


	}

	int isFull(){
		if (top == CAPACITY-1){
			return 1;
		}
		else{
			return 0;
		}
	}
	// first return top of the stack then remove one element 
	int pop(){
		if(isEmpty()){
			return 0;
		}
		else{
			return stack[top--];
		}

	}

	int isEmpty(){
		if (top == -1){
			return 1;
		}
		else{
			return 0;
		}
	}


	void peek(){
		if(isEmpty()){
			printf("Stack is empty\n");
		}
		else{
			printf("peek element : %d\n",stack[top] );
		}
	}


	void print(){
		if(isEmpty()){
			printf("Stack is empty\n");
		}
		else{
			int i;
			printf("Stack elements are:\n");
			for(i=0;i<=top;i++){
				printf("%d\n",stack[i] );
			}
		}
	}





	}
}

