#include <stdio.h>


void main(){
	int number [10]={0,1,2,3,4,5,6,7,8,9};
	char input[1000]={};
	fgets(input,1000,stdin);
	int f,lengthofarray=0;
	int zero=0,one=0,two=0,three=0,four=0,five=0,six=0,seven=0,eight=0,nine=0;
	for (f=0; input[f]!= '\0';++f){
		lengthofarray=f;
	}

	for (int i=0;i<=lengthofarray;i++){

		if (input[i] == '0'){
			zero++;
		}
		else if (input[i] == '1'){
			one++;
		}
		else if (input[i] == '2')
		{

			two++;
		}
		else if (input[i]=='3')
		{
			three++;
		}
		else if (input[i]=='4')
		{
			four++;
		}
		else if (input[i]=='5')
		{
			five++;
		}
		else if (input[i]=='6')
		{
			six++;
		}
		else if (input[i]=='7')
		{
			seven++;
		}
		else if (input[i]=='8')
		{
			eight++;
		}
		else if (input[i]=='9')
		{
			nine ++;
		}


	}	
	printf("%d %d %d %d %d %d %d %d %d %d",zero,one,two,three,four,five,six,seven,eight,nine);
}