#include <stdio.h>

void main(){
	char c[100];
	int a;
	FILE *fp;
	fp=fopen("c.txt","r");
	if (fp=NULL){
		printf("Unable to open file\n");

	}

	while((a=fgetc(fp))!EOF)
		putchar(c);




}