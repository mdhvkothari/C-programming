#include <stdio.h>

void main(){
	FILE* fp;
	//fopen gives the poitner which is FILE* 
	fp = fopen("c.txt","r");
	if (fp==NULL)
		printf("File is not persent\n");
	else
		printf("File opened\n");
	// read characher by character
	// on sucess return acsii value of charcher
	int ch;
	while((ch=fgetc(fp))!=EOF)
		printf("%c\n",ch );
}