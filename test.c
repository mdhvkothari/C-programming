#include <stdio.h>

struct {
	char name[20];
	int age;
}st1,st2;

void main(){
	for (int i=0;i<6;i++){
		scanf("%c",&st1.name[i]);	
	}
	
	printf("%s\n",st1.name );

	for (int i=0;i<6;i++){
		scanf("%c",&st2.name[i]);	
	}
	
	printf("%s\n",st2.name );
	
}