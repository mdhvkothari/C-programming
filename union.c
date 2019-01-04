#include <stdio.h>
#include <curses.h>
#include <string.h>
union data{
	char name[50];
	int age;
	char course[50];
	char aim[50];
};

void main(){

	union data data1;
	union data data2;

	/*Here, we can see that the values of i and f members of union got corrupted because the final value assigned to the variable 
	has occupied the memory location and this is the reason that the value of str member is getting printed very well.*/
	strcpy(data1.name,"Madhav Kothari");
	data1.age = 18;
	strcpy(data1.course,"B.tech");
	strcpy(data1.aim,"Programmer");
	printf("%s\n",data1.name);
	printf("%s\n",data1.course);
	printf("%d\n",data1.age );
	printf("%s\n",data1.aim );

	strcpy(data2.name,"Madhav Maheswari");
	printf("Name:%s \n",data2.name);
	data2.age = 18;
	printf("Age:%d\n",data2.age );
	strcpy(data2.course,"B.tech");
	printf("Course:%s\n",data2.course);
	strcpy(data2.aim,"Pro Programmer");
	printf("Aim:%s\n",data2.aim );
}