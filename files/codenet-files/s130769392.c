#include<stdio.h>

int main()
{
  int a,b,i,sum;
  
  while(scanf("%d %d",&a, &b)!=-1){
    sum=a+b;

    for(i=0;sum!=0;i++){
      sum=sum/10;
    }
    printf("%d", i);
  }
  return 0;
}