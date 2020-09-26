#include<stdio.h>
#include<math.h>
void main(){
	int a,b,i,j,rem,temp1,temp2,sum,n=0;
	scanf("%d %d",&a,&b);
	for(i=a;i<=b;i++){
		temp1=i;
		temp2=i;
		
		while(temp1!=0){
			temp1/=10;
			++n;
		}
		while(temp2!=0){
			rem = temp2%10;
			sum += pow(rem,n);
			temp2 = temp2/10;
		}
		if(sum == i){
			printf("%d ",i);
		}
		n = 0;
		sum= 0;
		
	}
	
}



