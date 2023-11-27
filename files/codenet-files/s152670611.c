#include<stdio.h>
int main(void){
  int a,b,g;
  scanf("%d%d",&a,&b);
  if(a<b){
    g=a;
    a=b;
    b=g;
  }
  while(g>=1){
    g=a%b;
    a=b;
    b=g;
  }
  printf("%d",a);
  return 0;
}