#include<stdio.h>
/* in linear search not needed any shorted array */
void main() {
  int array[5]={1,2,3,4,5};
  int item,flag=0;
  scanf("%d", &item);
  for(int i=0;i<5;i++){
    if (array[i]==item){
      flag=1;
    }
  }
  if(flag==1){
    printf("Found!!\n");
  }
  else{
    printf("Not found\n");
  }

}
