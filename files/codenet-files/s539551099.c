#include<stdio.h>

int main(void){

  int a,b,sum;
  int k=0;
  while(scanf("%d %d",&a,&b)!=-1){
   sum=a+b;
  while(sum/10!=0){
    sum=sum/10; k++;
  }
  k++;
  printf("%d",k);
  k=0;
  }

  

  return 0;
}