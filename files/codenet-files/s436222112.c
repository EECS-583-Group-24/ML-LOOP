#include<stdio.h>
int main(){
  int a,b,num,sum;
  num=1;
  scanf("%d%d",&a,&b);
  sum=a+b;
  while(sum>9){
    sum=sum/10;
    num++;
  }
  printf("%d\n",num);
  return 0;
}