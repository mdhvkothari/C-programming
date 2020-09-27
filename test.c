#include<stdio.h>

void main(){
	int n=3,i,j;
	int mat[][3] = {{2,3,4},{5,6,7},{8,9,10}};
	for(i=0;i<n;i++){
		if(i%2==0){
			for(j=0;j<n;j++){
			printf("%d ",mat[i][j]);
			}	
		}
		else{
			for(j=n-1;j>=0;j--){
				printf("%d ",mat[i][j]);
			}
		}
		
	}
}
