#include <stdio.h>
#include <curses.h>
#include <string.h>
struct books
{
	char title[50];
	char author[50];
	char subject[50];
	int price;
};


/*function decleration */
void printbook(struct books book);




void main(){
	struct books book1;     /*Decleartion book as a book1 */


	strcpy(book1.title,"C programming");
	strcpy(book1.author,"Madhav");
	strcpy(book1.subject,"Programming");
	book1.price = 500;

	printbook(book1);
}

void printbook(struct books book){
	printf("Book title:%s\n",book.title);
	printf("Book author:%s\n",book.author);
	printf("Book subject:%s\n",book.subject);
	printf("Book price:%d\n",book.price);
}