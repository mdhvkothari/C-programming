#include <stdio.h>

void main(){
	FILE *p1,*p2;
	int ch;
	p1=fopen("original.txt","r");
	p2=fopen("copied.txt","w");

	while((ch=fgetc(p1))!=EOF)
		fputc(ch,p2);
		printf("copied\n");
	
}