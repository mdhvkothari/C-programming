#include <stdio.h>
#include <string.h>
struct books{
	char title[40];
	char author[40];
	char subject[40];
	int book_id;
};

void printbook(struct books book);

void main(){
	struct books book1;
	struct books book2;

	strcpy(book1.title , "Madhav Kothari");
	strcpy(book1.author,"Maddy");
	strcpy(book1.subject,"Future Software Engineer");
	book1.book_id = 1;
	printbook(book1);
	strcpy(book2.title , "Madhav");
	strcpy(book2.author,"Madd");
	strcpy(book2.subject,"Future Software Engineer");
	book2.book_id = 2;
	printbook(book2);

}

void printbook(struct books book){
	printf("title: %s\n",book.title);
	printf("author: %s\n",book.author);
	printf("subject:%s\n",book.subject);
	printf("book_id:%d\n",book.book_id);
}

