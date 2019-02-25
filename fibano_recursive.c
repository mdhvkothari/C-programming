#include <stdio.h>

int fibo(int n);

void main(){
  int n;
  printf("Enter number:\n");
  scanf("%d",&n);

  int j=0;
  for (int i=0;i<=n;i++){
    printf("%d\n",fibo(i));
  }
}

int fibo(int n){
  if (n==0)
    return 0;
  else if (n==1)
    return 1;
  else
    return(fibo(n-1)+fibo(n-2));
}
