#include<stdio.h>

int main(){
  long x,y,d;
  scanf("%d%d",&x,&y);
  while(x % y >0)
    d = x % y;
  printf("%d\n",d);
}

