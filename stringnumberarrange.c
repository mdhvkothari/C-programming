#include <stdio.h>
#include <string.h>

void main(){
	char input[20];
	fgets(input,20,stdin);
	char number1[10];
	char string[10];
	char final[20];
	int index=0;
	int index1=0;
	int finalindex=0;
	int string5=0;
	int number5=0;
	char temp;
	char temp1;

	for (int i=0;i<strlen(input);i++){
		if (input[i]>=97 && input[i]<=122){

			string[index]=input[i];
			index+=1;
		}
		else{
			number1[index1]=input[i];
			index1+=1;
		}
	
	
	}
	
	for (int j=0;j<strlen(string);j++){
		for (int k=0;k<strlen(string)-1;k++){
			if(string[k]>string[k+1]){
				temp=string[k];
				string[k]=string[k+1];
				string[k+1]=temp;
			} 
		}	
	}

	
	for(int l=0;l<strlen(number1);l++){
		for (int m=0;m<strlen(number1)-1;m++){
			if (number1[m]>number1[m+1]){
				temp1=number1[m];
				number1[m]=number1[m+1];
				number1[m+1]=temp1;
			}
		}
	}

	for(int n=0;n<strlen(input)-1;n++){
		if(input[n]>=97 && input[n]<=122){
			final[finalindex]=string[string5];
			finalindex+=1;
			string5+=1;
		} 
		else{
			final[finalindex]=number1[number5+1];
			finalindex+=1;
			number5+=1;



		}
	}
	printf("%s\n", final);

	
}
	