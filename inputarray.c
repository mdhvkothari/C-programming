#include <stdio.h>
#include <curses.h>
#include <string.h>	
void main(){
	char name[6];
	char upper[6];
	char final[6];
	fgets(name,7,stdin);
	for (int i=0; i<=6;i++){
		if (name[i]>=97 && name[i]<=127){
			upper[i]=name[i]-32;
		}
		else{
			upper[i]=name[i]	;
		}
	}
	for (int j=0; j<=6; j++){
		if (j%2!=0){
			if (upper[j]=name[j]){
				final[j]=name[j];
			}	
			
		}
		else{
				final[j]=upper[j];
			
	}
	printf("%s\n", final);	
}